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

size_t	ft_strlen(const char* s);
void	error();
int		check_no_digit(char* av);
char*	ft_strjoin(char* s1, char const* s2);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
char**	ft_split(char const* s, char c);
long	ft_atoi(const char* nptr);
size_t	ft_strlcpy(char* dst, const char* src, size_t size);
char*	ft_strdup(const char*	s);
void	free_double(char**	ptr);
int		check_digit(char **av);
void	ft_lstclear(t_list **lst);
t_list*	list_create(char **list_arr);
int		check_double(t_list *list);
int		check_int_min_max(char *str);
int		ft_putchar(char c);
int		ft_printp(unsigned long num);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
int		ft_printhex(unsigned int num, int a);
int		ft_putnbr(int num);
int		ft_printu(unsigned int num);
