# 🧠 NotLibc

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![OpenSource](https://img.shields.io/badge/Open%20Source-4ABF4B?style=for-the-badge)

**NotLibc** is a custom implementation of essential C standard library functions, built from scratch.  
It provides foundational utilities for **strings, memory, I/O, character checks, numbers, and linked lists**, allowing for easy handling of common C tasks without relying on the standard library.  

This project is based on **42's Libft project**!

---

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Tech Stack](#tech-stack)
- [Authors](#authors)

---

## 🧩 About

NotLibc is designed to be:

- **Modular:** All functions are organized by category for easy navigation.
- **Self-contained:** No external dependencies beyond standard C headers.
- **Educational:** Implements standard library functionality from scratch, providing insight into low-level C operations.

---

## ✨ Features

- ✅ Character checking: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- ✅ Memory manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- ✅ I/O utilities: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` , `ft_printf`, `get_next_line`
- ✅ Number utilities: `ft_atoi`, `ft_itoa`
- ✅ String manipulation: `ft_strlen`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_striteri`, `ft_strmapi`, `ft_toupper`, `ft_tolower`
- ✅ Linked list utilities: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
- ✅ A personal shell script that allowed me to automate boring tasks in the creation of this DEFINITELY not libc library
---

## 🗂️ Project Structure
<details>
   <summary>Click to expand</summary>
  
  ```
  NotLibc/
  ├── char_checks/         # Character classification
  │   ├── ft_isalpha.c
  │   ├── ft_isdigit.c
  │   ├── ft_isalnum.c
  │   ├── ft_isascii.c
  │   └── ft_isprint.c
  │
  ├── io_utils/            # File descriptor I/O utilities
  │   ├── ft_putchar_fd.c
  │   ├── ft_putstr_fd.c
  │   ├── ft_putendl_fd.c
  │   ├── ft_putnbr_fd.c
  │   ├── get_next_line/
  │   │   ├── get_next_line.c
  │   │   ├── get_next_line_utils.c
  │   │   └── get_next_line.h
  │   └── ft_printf/
  │       ├── ft_printf.c
  │       ├── ft_printf.h
  │       └── utils/
  │           ├── conversion.c
  │           ├── flags.c
  │           ├── ft_puthex.c
  │           ├── ft_puthexcase.c
  │           ├── ft_putunsign.c
  │           └── utils.h
  │
  ├── mem_manipulation/    # Memory management functions
  │   ├── ft_bzero.c
  │   ├── ft_calloc.c
  │   ├── ft_memchr.c
  │   ├── ft_memcmp.c
  │   ├── ft_memcpy.c
  │   ├── ft_memmove.c
  │   └── ft_memset.c
  │
  ├── num_manipulation/    # String ↔ number conversions
  │   ├── ft_atoi.c
  │   └── ft_itoa.c
  │
  ├── str_manipulation/    # String utilities
  │   ├── ft_split.c
  │   ├── ft_strdup.c
  │   ├── ft_strjoin.c
  │   ├── ft_strlcpy.c
  │   ├── ft_strmapi.c
  │   ├── ft_strnstr.c
  │   ├── ft_strtrim.c
  │   ├── ft_tolower.c
  │   ├── ft_strchr.c
  │   ├── ft_striteri.c
  │   ├── ft_strlcat.c
  │   ├── ft_strlen.c
  │   ├── ft_strncmp.c
  │   ├── ft_strrchr.c
  │   ├── ft_substr.c
  │   └── ft_toupper.c
  │
  ├── struct_utils/        # Linked list functions
  |   ├── ft_lstadd_back.
  |   ├── ft_lstadd_front.c
  |   ├── ft_lstclear.c
  |   ├── ft_lstdelone.c
  |   ├── ft_lstiter.c
  |   ├── ft_lstlast.c
  |   ├── ft_lstmap.c
  |   ├── ft_lstnew.c
  |   └── ft_lstsize.c
  | 
  ├── Makefile
  ├── libft.h
  └── pls.sh
  ```
</details>

All functions are modular and follow **consistent naming conventions**, making it easy to integrate them into any C project.

---

## ⚙️ Installation

1. **Clone the repository**
```bash
git clone https://github.com/Sfeso13/NotLibc.git
cd NotLibc
```
2. **Compile the library**
```bash
make
```
This creates a static `libft.a` you can link to your own projects.

3. **Clean compiled objects**
```bash
make clean      # remove object files
make fclean     # remove object files and library
make re         # rebuild everything
```

---

## 🚀 Usage

Include the library in your project:
```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, NotLibc!";
    printf("%zu\n", ft_strlen(str));
    return 0;
}
```
Compile with:
```bash
cc main.c -L. -lft -I includes
```

**BONUS STUFF:**

In case you find yourself wanting to expand this library further, you can easily do so with the help of `pls.sh`
1. **Make sure the script is executable:**
```bash
chmod +x pls.sh
```
2. **Run the script with a function prototype as a string:**
```bash
./pls.sh "int ft_strlen(const char *s);"
```
and voila, you have:
 - your header updated with the new prototype `int ft_strlen(const char *s)`.
 - your .c is created and ready to use.

