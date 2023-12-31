/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:01:52 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/02 11:07:42 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

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

int			check_pile(char **argv, int start, int argc);
int			**get_pile(int argc, char **argv, int start);
t_tab		one_arg(char **argv);
int			**algo(t_tab tab);
int			**algo_3(t_tab tab);
void		free_split(char **split);
int			check_ordered(t_tab tab);
t_tab		algo_moves(t_tab tab, t_algo x);
t_tab		refill_a(t_tab t);
t_tab		sa(t_tab tab);
t_tab		ss(t_tab tab);
t_tab		pa(t_tab tab);
t_tab		pb(t_tab tab);
t_tab		ra(t_tab tab);
t_tab		rb(t_tab tab);
t_tab		rr(t_tab tab);
t_tab		rra(t_tab tab);
t_tab		rrb(t_tab tab);
t_tab		rrr(t_tab tab);
int			maxfullb(int *pile, int b);
int			minfullb(int *pile, int b);
int			bm1(int rankb, int b);
int			ft_min(int a, int b);
t_algo		check_speed(t_algo x, t_tab t);
long long	ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
void		free_pile(int **pile);

#endif
