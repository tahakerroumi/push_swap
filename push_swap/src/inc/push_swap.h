/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 01:16:45 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/24 14:21:47 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_list
{
	int				index;
	int				value;
	struct s_list*	next;
}					t_list;

// libft
size_t	ft_strlen(const char* s);
char*	ft_strjoin(char* s1, char const* s2);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
char**	ft_split(char const* s, char c);
long	ft_atoi(const char* nptr);
size_t	ft_strlcpy(char* dst, const char* src, size_t size);
char*	ft_strdup(const char*	s);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list*	ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);

// parsing
int		check_no_digit(char* av);
void	free_double(char**	ptr);
int		check_digit(char **av);
void	ft_lstclear(t_list **lst);
t_list*	list_create(char **list_arr);
int		check_double(t_list *list);
int		check_int_min_max(char *str);
void	error();

// printf
int		ft_putchar(char c);
int		ft_printp(unsigned long num);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
int		ft_printhex(unsigned int num, int a);
int		ft_putnbr(int num);
int		ft_printu(unsigned int num);

// moves
void	s(t_list** stack);
void	p(t_list** stack_src, t_list** stack_dest);
void	r(t_list** stack);
void	rr(t_list** stack);
void	sab(t_list **stack_a, t_list **stack_b);
void	pab(int i, t_list **stack_a, t_list **stack_b);
void	rab(t_list **stack_a, t_list **stack_b);
void	rrab(t_list **stack_a, t_list **stack_b);
void	push_swap(t_list** list, t_list** stack_b);
int		if_sorted(t_list* lst);
int		max_number(t_list* lst);
int		min_number(t_list* lst);
void	fivenfour(t_list** stack_a, t_list** stack_b);
void	three(t_list** lst);
int		indeX(t_list* list, int min);
int		*array(t_list** stack);
void	sortarray(int *arr, int len);
void    sort_number(t_list **stack_a, t_list** stack_b, int *arr, int div);
void    change_index(t_list** stack, int *arr);
int		find_index(t_list *s_a, int x, int p);
void    swap(int *a, int *b);
int		find(int num, int *arr, int lenght);
void    change_index(t_list** stack, int *arr);
void	sortarray(int *arr, int len);
void	back_to_a(t_list **stack_a, t_list **stack_b);
int		get_i(t_list *s_a, int val);

#endif
