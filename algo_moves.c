/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:25:24 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 15:25:33 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_tab	algo_moves_suite(t_tab tab, t_algo x)
{
	if (x.exit == 3)
	{
		while (x.br1++ < tab.a)
			tab = rra(tab);
		while (x.br2-- > 0)
			tab = rb(tab);
	}
	if (x.exit == 4)
	{
		while (x.br1 < tab.a && x.br2 < tab.b)
		{
			tab = rrr(tab);
			x.br1++;
			x.br2++;
		}
		while (x.br1++ < tab.a)
			tab = rra(tab);
		while (x.br2++ < tab.b)
			tab = rrb(tab);
	}
	return (pb(tab));
}

t_tab	algo_moves(t_tab tab, t_algo x)
{
	if (x.exit == 1)
	{
		while (x.br1 > 0 && x.br2 > 0)
		{
			tab = rr(tab);
			x.br1--;
			x.br2--;
		}
		while (x.br1-- > 0)
			tab = ra(tab);
		while (x.br2-- > 0)
			tab = rb(tab);
	}
	if (x.exit == 2)
	{
		while (x.br1-- > 0)
			tab = ra(tab);
		while (x.br2++ < tab.b)
			tab = rrb(tab);
	}
	tab = algo_moves_suite(tab, x);
	return (tab);
}
