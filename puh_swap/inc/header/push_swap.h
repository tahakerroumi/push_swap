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

typedef struct s_list
{
	int				index;
	int				value;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *s);
t_list*	fill_stack(char *s);
void	error(char * str);
char*	space(char *str);
int		check_no_digit(char *av);
char*	parsing(int ac, char **av);
int		check_string(char *str);
char    *ft_strjoin(char *s1, char const *s2);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *nptr);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list *ft_lstnew(long content);
void free_double(char **ptr);
