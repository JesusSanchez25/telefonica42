# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 12:21:00 by marvin            #+#    #+#              #
#    Updated: 2024/11/10 12:21:00 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libftprintf.a
SRCS = ft_printf.c ft_itoas.c ft_strlen.c ft_print_utils.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS =
# TODO -Wall -Wextra -Werror -g  # Añade flags de compilación completas
TEST = main
TEST_SRC = main.c

# Reglas
all: $(NAME)

# Crear biblioteca
$(NAME): $(OBJS)
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

# Compilar programa de prueba
$(TEST): $(NAME) $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) $(NAME) -o $(TEST)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re

run: $(TEST)
	./$(TEST)
