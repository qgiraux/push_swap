/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:33:37 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/02 11:11:12 by qgiraux          ###   ########.fr       */
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

t_tab		sab(t_tab tab);
t_tab		sbb(t_tab tab);
t_tab		ssb(t_tab tab);
t_tab		pab(t_tab tab);
t_tab		pbb(t_tab tab);
t_tab		rab(t_tab tab);
t_tab		rbb(t_tab tab);
t_tab		rrb(t_tab tab);
t_tab		rrab(t_tab tab);
t_tab		rrbb(t_tab tab);
t_tab		rrrb(t_tab tab);
int			check_ordered(t_tab tab);
void		execute(t_tab tab);
void		free_split(char **split);
char		*get_next_line(int fd);
char		**ft_split(char const *s, char c);
int			ft_strncmp(const char *s1, const char *s2, size_t len);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strdup(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strchr(const char *str, int c);
void		ft_bzero(void *str, size_t size);
t_tab		one_arg(char *arg);
int			check_pile(char **strs, int start, int argc);
int			**get_pile(int argc, char **argv, int start);
long long	ft_atoi(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
t_tab		execute_2(t_tab tab, char *input);
#endif