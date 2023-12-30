/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:33:37 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 13:05:29 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_tab {
	int	**pile;
	int	a;
	int	b;
}				t_tab;

t_tab		one_arg(char *arg);
int			**get_pile(int argc, char **argv, int start);
int			check_pile(char **strs, int start, int argc);
t_tab		sa(t_tab tab);
t_tab		sb(t_tab tab);
t_tab		ss(t_tab tab);
t_tab		pa(t_tab tab);
t_tab		pb(t_tab tab);
t_tab		ra(t_tab tab);
t_tab		rb(t_tab tab);
t_tab		rr(t_tab tab);
t_tab		rra(t_tab tab);
t_tab		rrb(t_tab tab);
t_tab		rrr(t_tab tab);
int			check_ordered(t_tab tab);
void		execute(t_tab tab);
void		free_split(char **split);
char		*get_next_line(int fd);
long long	ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
int			ft_strncmp(const char *s1, const char *s2, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strdup(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strchr(const char *str, int c);
void		ft_bzero(void *str, size_t size);
#endif