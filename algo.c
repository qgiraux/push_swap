/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:53:35 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/18 17:16:59 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**algo(t_tab tab)
{
	int	n;
	int	m;
	int	c;
	int	size;

	size = tab.a;
	c = 0;
	while (c < size - 1)
	{
		m = 0;
		n = 0;
		while (++n < size - c)
			if (tab.pile[0][n] < tab.pile[0][m])
				m = n;
		if (m < (size - c + 1) / 2)
			while (m-- > 0)
				tab = ra(tab);
		else
			while (m++ < size - c)
				tab = rra(tab);
		tab = pb(tab);
		c++;
	}
	n = 0;
	while (n++ < size - 1)
		tab = pa(tab);
	return (tab.pile);
}

int	**algo_3(t_tab tab)
{
	if (tab.a == 2)
		if (tab.pile[0][0] > tab.pile[0][1])
			tab = sa(tab);
	if (tab.a == 3)
		if (tab.pile[0][0] > tab.pile[0][1] && tab.pile[0][0] > tab.pile[0][2])
			tab = ra(tab);
	if (tab.pile[0][1] > tab.pile[0][2])
		tab = rra(tab);
	if (tab.pile[0][0] > tab.pile[0][1])
		tab = sa(tab);
	return (tab.pile);
}
