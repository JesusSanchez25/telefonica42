# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c \
       ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
       ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)
RM = rm -f

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "Library $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
