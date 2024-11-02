#!/bin/bash

# Check if the prototype is provided
if [ -z "$1" ]; then
    echo "Usage: $0 \"<function_prototype>\""
    exit 1
fi

# Prototype provided as argument
prototype=$1

# Strip the semicolon at the end of the prototype (if present)
prototype=$(echo "$prototype" | sed 's/;\s*$//')

echo "Prototype: $prototype"

# Extract the function name from the prototype
#func_name=$(echo "$prototype" | grep -oP "\w+(?=\()")
func_name=$(echo "$prototype" | sed -E 's/^[^ ]+[ ]+[^ ]*(ft_[a-zA-Z_][a-zA-Z0-9_]*)\s*\(.*$/\1/')
echo "Extracted function name: $func_name"

if [ -z "$func_name" ]; then
    echo "Error: No valid function name extracted from the prototype."
    exit 1
fi

# Conditional prefixing of the function name with ft_
if [[ "$func_name" == ft_* ]]; then
    ft_func_name="$func_name"  # Keep the name as is
else
    ft_func_name="ft_$func_name"  # Add ft_ prefix
fi
# Replace the function name in the prototype with the prefixed version
#ft_prototype=$(echo "$prototype" | sed "s/$func_name/$ft_func_name/")
ft_prototype=$(echo "$prototype" | sed "s/\<${func_name}\>/${ft_func_name}/")

# Replace space between return type and function name with a tab
ft_prototype=$(echo "$ft_prototype" | sed "s/\([a-zA-Z0-9_*]\) \{1,\}\($ft_func_name\)/\1\t\2/")

# Add the prototype to libft.h if not already present
header_file="libft.h"

# Check if the prototype already exists in the header file

# Check if the prototype already exists in the header file
if grep -qF "$ft_prototype" "$header_file"; then
    echo "$ft_prototype already exists in $header_file"
else
    echo "Adding prototype to $header_file"

    # Create a temporary file for the modified header
    temp_file=$(mktemp)

    # Flag to check if the prototype was added
    added=false

    # Read the header file and process lines
    while IFS= read -r line; do
        if [[ "$line" == "#endif" && "$added" == false ]]; then
            echo "$ft_prototype" >> "$temp_file"  # Add the prototype
            added=true
        else
            echo "$line" >> "$temp_file"  # Copy other lines
        fi
    done < "$header_file"

    # Append #endif back at the end of the file
    if ! $added; then
        echo "$ft_prototype" >> "$temp_file"
    fi
    echo "" >> "$temp_file"
	echo "#endif" >> "$temp_file"

    # Overwrite the original header file with the modified temp file
    mv "$temp_file" "$header_file"
    echo "$ft_prototype added to $header_file"
fi

# Create a .c file with the same name if it doesn't exist
c_file="${ft_func_name}.c"

if [ ! -f "$c_file" ]; then
    # Remove the semicolon at the end of the prototype for the .c file
    ft_prototype_no_semicolon=$(echo "$ft_prototype" | sed 's/;$//')

    echo "#include \"libft.h\"" > "$c_file"
    echo "" >> "$c_file"
    echo "$ft_prototype_no_semicolon" >> "$c_file"
    echo "{" >> "$c_file"
    echo "}" >> "$c_file"
    echo "$c_file created"
else
    echo "$c_file already exists"
fi

# Update the Makefile to include the new .c file in the SRC variable
makefile="Makefile"

if ! grep -q "$c_file" "$makefile"; then
    echo "Adding $c_file to SRC in $makefile"

    # Create a temporary file for the modified Makefile
    temp_makefile=$(mktemp)

    # Flag to check if we are in the SRC variable section
    in_src_section=false

    # Read the Makefile and process lines
    while IFS= read -r line; do
        echo "$line" >> "$temp_makefile"  # Copy other lines

        # Check if we are at the SRC declaration line
        if [[ "$line" =~ ^SRC[[:space:]]*:= ]]; then
            in_src_section=true
        fi

        # If in SRC section, check for the end of the line
        if $in_src_section && [[ "$line" != *"\\\\"* ]]; then
            echo "      ./$c_file \\" >> "$temp_makefile"  # Add the new .c file
            in_src_section=false  # Stop after adding to avoid multiple additions
        fi
    done < "$makefile"

    # Overwrite the original Makefile with the modified temp file
    mv "$temp_makefile" "$makefile"
    echo "$c_file added to SRC in $makefile"
else
    echo "$c_file is already in SRC in $makefile"
fi
