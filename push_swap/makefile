# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/18 05:17:05 by tkerroum          #+#    #+#              #
#    Updated: 2024/06/03 20:08:51 by tkerroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror 

EXEC = push_swap
SRC = src/outils/actions.c src/outils/ft_split.c \
		src/parsing/parsing.c src/parsing/stack_a.c src/main.c src/outils/next_actions.c \
		src/ft_printf/ft_printf.c src/ft_printf/ft_printhex.c src/ft_printf/ft_printp.c \
		src/ft_printf/ft_printu.c src/ft_printf/ft_putchar.c src/ft_printf/ft_putnbr.c src/ft_printf/ft_putstr.c \
		src/moves/first_moves.c src/moves/both_moves.c src/moves/push_swap.c src/moves/tools_to_sort.c src/parsing/parse.c

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