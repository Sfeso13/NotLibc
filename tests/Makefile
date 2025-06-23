CC := cc

CFLAGS := -Wall -Wextra -Werror 

SRC :=  ./test_ft_isalpha.c \
    	./test_ft_isdigit.c \
    	./test_ft_isalnum.c \
    	./test_ft_isascii.c \
    	./test_ft_isprint.c \
    	./test_ft_strlen.c \
    	./test_ft_memset.c \
    	./test_ft_bzero.c \
    	./test_ft_memcpy.c \
    	./test_ft_memmove.c \
    	./test_ft_strlcpy.c \
    	./test_ft_strlcat.c \
    	./test_ft_strchr.c \
    	./test_ft_toupper.c \
    	./test_ft_tolower.c \
    	./test_ft_strchr.c \
    	./test_ft_strrchr.c \
    	./test_ft_strncmp.c \
    	./test_ft_memchr.c \
    	./test_ft_strnstr.c \
    	./test_ft_atoi.c \
    	./test_ft_calloc.c \
    	./test_ft_strdup.c \

OBJS := $(addprefix objs/, $(SRC:.c=.o))

NAME := tests

LIBFT_DIR := ..
LIBFT := $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

objs/%.o: %.c
	mkdir -p objs
	$(CC) $(CFLAGS) -c $< -o $@ -MMD

clean:
	rm -rf objs
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

-include $(OBJS:.o=.d)
