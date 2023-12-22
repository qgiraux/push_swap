/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:02:14 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 11:37:21 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	pa(t_tab tab)
{
	int	n;

	n = tab.a;
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = tab.pile[1][0];
	while (++n < tab.b)
		tab.pile[1][n] = tab.pile[1][n + 1];
	tab.pile[1][n] = 0;
	write (1, "pa\n", 3);
	tab.a++;
	tab.b--;
	return (tab);
}

t_tab	pb(t_tab tab)
{
	int	n;

	n = tab.b;
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = tab.pile[0][0];
	while (++n < tab.a)
		tab.pile[0][n] = tab.pile[0][n + 1];
	tab.pile[0][n] = 0;
	write (1, "pb\n", 3);
	tab.b++;
	tab.a--;
	return (tab);
}

t_tab	ra(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[0][0];
	n = 0;
	while (++n < tab.a)
		tab.pile[0][n - 1] = tab.pile[0][n];
	tab.pile[0][n - 1] = temp;
	write (1, "ra\n", 3);
	return (tab);
}
