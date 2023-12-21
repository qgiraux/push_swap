/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:01:52 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 17:12:03 by qgiraux          ###   ########.fr       */
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

typedef struct s_algo
{
	int	r1;
	int	r2;
	int	best;
	int	speed;
	int	exit;
	int	br1;
	int	br2;
}				t_algo;

int		check_pile(char **argv, int start, int argc);
int		**get_pile(int argc, char **argv, int start);
t_tab	one_arg(char **argv);
int		**algo(t_tab tab);
int		**algo_3(t_tab tab);
void	free_split(char **split);
int		check_ordered(t_tab tab);
t_tab	algo_moves(t_tab tab, t_algo x);
t_tab	refill_a(t_tab t);
t_tab	sa(t_tab tab);
t_tab	ss(t_tab tab);
t_tab	pa(t_tab tab);
t_tab	pb(t_tab tab);
t_tab	ra(t_tab tab);
t_tab	rb(t_tab tab);
t_tab	rr(t_tab tab);
t_tab	rra(t_tab tab);
t_tab	rrb(t_tab tab);
t_tab	rrr(t_tab tab);
t_tab	convert(t_tab tab);

#endif
