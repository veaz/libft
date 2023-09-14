LIBC_FUNCTIONS = ./srcs/libc_functions/ft_atoi.c \
	./srcs/libc_functions/ft_isalpha.c \
	./srcs/libc_functions/ft_isdigit.c \
	./srcs/libc_functions/ft_isalnum.c \
	./srcs/libc_functions/ft_isascii.c \
	./srcs/libc_functions/ft_isprint.c \
	./srcs/libc_functions/ft_strlen.c \
	./srcs/libc_functions/ft_memset.c \
	./srcs/libc_functions/ft_bzero.c \
	./srcs/libc_functions/ft_memcpy.c \
	./srcs/libc_functions/ft_memmove.c \
	./srcs/libc_functions/ft_strlcpy.c \
	./srcs/libc_functions/ft_strlcat.c \
	./srcs/libc_functions/ft_toupper.c \
	./srcs/libc_functions/ft_tolower.c \
	./srcs/libc_functions/ft_strchr.c \
	./srcs/libc_functions/ft_strrchr.c \
	./srcs/libc_functions/ft_strncmp.c \
	./srcs/libc_functions/ft_memchr.c \
	./srcs/libc_functions/ft_memcmp.c \
	./srcs/libc_functions/ft_strnstr.c \
	./srcs/libc_functions/ft_calloc.c \
	./srcs/libc_functions/ft_strdup.c \

ADDITIONAL_FUNCTIONS = ./srcs/additional_functions/ft_itoa.c \
	./srcs/additional_functions/ft_putchar_fd.c \
	./srcs/additional_functions/ft_putstr_fd.c \
	./srcs/additional_functions/ft_putendl_fd.c \
	./srcs/additional_functions/ft_putnbr_fd.c \
	./srcs/additional_functions/ft_split.c \
	./srcs/additional_functions/ft_striteri.c \
	./srcs/additional_functions/ft_strjoin.c \
	./srcs/additional_functions/ft_strtrim.c \
	./srcs/additional_functions/ft_strmapi.c \
	./srcs/additional_functions/ft_substr.c

BONUS = ./srcs/bonus/ft_lstnew.c \
		./srcs/bonus/ft_lstadd_front.c \
		./srcs/bonus/ft_lstsize.c \
		./srcs/bonus/ft_lstlast.c \
		./srcs/bonus/ft_lstadd_back.c \
		./srcs/bonus/ft_lstdelone.c \
		./srcs/bonus/ft_lstclear.c \
		./srcs/bonus/ft_lstiter.c \
		./srcs/bonus/ft_lstmap.c

SRCS = $(LIBC_FUNCTIONS) $(ADDITIONAL_FUNCTIONS)

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I ./include/
RM = rm -f
OBJS = $(SRCS:.c=.o)
BONUSOBJS = $(BONUS:.c=.o)

AR = ar -rcs
CC = gcc -c

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "\x1b[32mCompilation successful\x1b[0m"

bonus: $(OBJS) $(BONUSOBJS)
	$(AR) $(NAME) $(OBJS) $(BONUSOBJS)
	@echo "\x1b[32mCompilation successful\x1b[0m"

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
