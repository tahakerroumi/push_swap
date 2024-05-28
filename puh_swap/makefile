# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/18 05:17:05 by tkerroum          #+#    #+#              #
#    Updated: 2024/05/28 13:42:13 by tkerroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror 

EXEC = push_swap
SRC = src/libft_src/actions.c src/libft_src/ft_split.c \
		src/push/parsing.c src/push/stack_a.c src/main.c src/libft_src/next_actions.c
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