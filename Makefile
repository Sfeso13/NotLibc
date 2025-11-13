CC = cc

CFLAGS := -Wall -Wextra -Werror

NAME := libft.a

IO_SRCS := ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c

CHAR_SRCS := ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isalpha.c

MEM_SRCS := ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c

NUM_SRCS := ft_itoa.c ft_atoi.c

STR_SRCS := ft_striteri.c ft_strmapi.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strlen.c \
            ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c ft_strncmp.c \
            ft_strnstr.c ft_strdup.c

STRUCT_SRC := ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		          ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

PRNT_UTILS_SRCS := flags.c conversion.c ft_puthex.c ft_puthexcase.c ft_putunsign.c 

PRNT_SRCS := ft_printf.c

GNL_SRCS := get_next_line.c

OBJS := $(addprefix objs/, $(IO_SRCS:.c=.o)) $(addprefix objs/, $(CHAR_SRCS:.c=.o)) \
        $(addprefix objs/, $(MEM_SRCS:.c=.o)) $(addprefix objs/, $(NUM_SRCS:.c=.o)) \
        $(addprefix objs/, $(STR_SRCS:.c=.o)) $(addprefix objs/, $(STRUCT_SRC:.c=.o)) \
				$(addprefix objs/, $(PRNT_SRCS:.c=.o)) $(addprefix objs/, $(PRNT_UTILS_SRCS:.c=.o)) \
				$(addprefix objs/, $(GNL_SRCS:.c=.o))

GNL_SRCS := $(addprefix get_next_line/, $(GNL_SRCS))
PRNT_UTILS_SRCS:= $(addprefix utils/, $(PRNT_UTILS_SRCS))
PRNT_SRCS:= $(addprefix ft_printf/, $(PRNT_SRCS)) $(addprefix ft_printf/, $(PRNT_UTILS_SRCS))
IO_SRCS := $(addprefix io_utils/, $(IO_SRCS)) $(addprefix io_utils/, $(PRNT_SRCS)) $(addprefix io_utils/, $(GNL_SRCS))
CHAR_SRCS := $(addprefix char_checks/, $(CHAR_SRCS))
MEM_SRCS := $(addprefix mem_manipulation/, $(MEM_SRCS))
NUM_SRCS := $(addprefix num_manipulation/, $(NUM_SRCS))
STR_SRCS := $(addprefix str_manipulation/, $(STR_SRCS))
STRUCT_SRC := $(addprefix struct_utils/, $(STRUCT_SRC))

all : $(NAME)

$(NAME) : $(OBJS)

objs/%.o : io_utils/ft_printf/utils/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : io_utils/ft_printf/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : io_utils/get_next_line/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : io_utils/%.c 
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : char_checks/%.c 
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : num_manipulation/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : mem_manipulation/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : str_manipulation/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

objs/%.o : struct_utils/%.c
	mkdir -p objs/
	$(CC) $(CFLAGS) -c $< -o $@ -MMD
	ar rcs $(NAME) $@

clean :
	rm -rf objs/

fclean : clean
	rm -f $(NAME)

re : fclean all

-include $(OBJS:.o=.d)
-include $(BOBJS:.o=.d)
.PHONY: clean
