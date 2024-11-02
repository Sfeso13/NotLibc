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

OBJS := $(SRC:.c=.o)

NAME := libtst.a

all : $(NAME)

$(NAME) : $(OBJS) tests.h
	ar -rcs $@ $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean
