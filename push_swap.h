/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:01:52 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/19 11:55:16 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft.h"
# include <stdio.h>

typedef struct s_tab {
	int	**pile;
	int	a;
	int	b;
}				t_tab;

int		check_pile(char **argv, int start, int argc);
int		**get_pile(int argc, char **argv, int start);
t_tab	one_arg(char **argv);
int		**algo(t_tab tab);
int		**algo_3(t_tab tab);
void	free_split(char **split);
int		check_ordered(t_tab tab);
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

#endif
