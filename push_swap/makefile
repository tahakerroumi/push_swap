# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/18 05:17:05 by tkerroum          #+#    #+#              #
#    Updated: 2024/05/30 17:49:16 by tkerroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror 

EXEC = push_swap
SRC = src/libft_src/actions.c src/libft_src/ft_split.c \
		src/parsing/parsing.c src/parsing/stack_a.c src/main.c src/libft_src/next_actions.c \
		ft_printf/ft_printf.c ft_printf/ft_printhex.c ft_printf/ft_printp.c \
		ft_printf/ft_printu.c ft_printf/ft_putchar.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c
OBJ = $(SRC:%.c=%.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: inc/%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(DEBUG)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all