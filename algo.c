/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:01:19 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 17:07:00 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	bm1(int rankb, int b)
{
	if (rankb == 0)
		return (b - 1);
	return (rankb - 1);
}

int	maxfullb(int *pile, int b)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (++r < b)
		if (pile[r] > pile[i])
			i = r;
	return (i);
}

int	minfullb(int *pile, int b)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (++r < b)
		if (pile[r] < pile[i])
			i = r;
	return (i);
}

int	**algo(t_tab t)
{
	t_algo	x;

	t = pb(pb(t));
	while (t.a > 3)
	{
		x.r1 = -1;
		x.speed = t.a + t.b + 3;
		while (++x.r1 < t.a)
		{
			x.r2 = 0;
			if (t.pile[0][x.r1] > t.pile[1][maxfullb(t.pile[1], t.b)])
				x.r2 = maxfullb(t.pile[1], t.b);
			else if (t.pile[0][x.r1] < t.pile[1][minfullb(t.pile[1], t.b)])
				x.r2 = maxfullb(t.pile[1], t.b);
			else
				while (t.pile[0][x.r1] > t.pile[1][bm1(x.r2, t.b)]
					|| t.pile[0][x.r1] < t.pile[1][x.r2])
					x.r2++;
			if (x.r1 + x.r2 - ft_min(x.r1, x.r2) < x.speed)
			{
				x.speed = x.r1 + x.r2 - ft_min(x.r1, x.r2);
				x.exit = 1;
				x.br1 = x.r1;
				x.br2 = x.r2;
			}
			if (x.r1 + (t.b - x.r2) < x.speed)
			{
				x.speed = x.r1 + (t.b - x.r2);
				x.exit = 2;
				x.br1 = x.r1;
				x.br2 = x.r2;
			}
			if ((t.a - x.r1) + x.r2 < x.speed)
			{
				x.speed = (t.a - x.r1) + x.r2;
				x.exit = 3;
				x.br1 = x.r1;
				x.br2 = x.r2;
			}
			if ((t.a - x.r1) + (t.b - x.r2)
				- ft_min((t.a - x.r1), (t.b - x.r2)) < x.speed)
			{
				x.speed = (t.a - x.r1) + (t.b - x.r2)
					- ft_min((t.a - x.r1), (t.b - x.r2));
				x.exit = 4;
				x.br1 = x.r1;
				x.br2 = x.r2;
			}
		}	
		t = algo_moves(t, x);
	}
	x.r2 = maxfullb(t.pile[1], t.b);
	if (x.r2 < t.b - x.r2)
		while (x.r2-- > 0)
			t = rb(t);
	else
		while (x.r2++ < t.b)
			t = rrb(t);
	t.pile = algo_3(t);
	t = refill_a(t);
	return (t.pile);
}
