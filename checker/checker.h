/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:33:37 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 14:03:18 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "Libft/libft.h"
# include "get_next_line/get_next_line.h"

typedef struct s_tab {
	int	**pile;
	int	a;
	int	b;
}				t_tab;

t_tab	one_arg(char *arg);
int	**get_pile(int argc, char **argv, int start);
int	check_pile(char **strs, int start, int argc);
t_tab	sa(t_tab tab);
t_tab	sb(t_tab tab);
t_tab	ss(t_tab tab);
t_tab	pa(t_tab tab);
t_tab	pb(t_tab tab);
t_tab	ra(t_tab tab);
t_tab	rb(t_tab tab);
t_tab	rr(t_tab tab);
t_tab	rra(t_tab tab);
t_tab	rrb(t_tab tab);
t_tab	rrr(t_tab tab);
int	check_ordered(t_tab tab);
void	execute(t_tab tab, char *input);
void	free_split(char **split);




#endif