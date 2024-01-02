/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:52:46 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 15:25:33 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	rb(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[1][0];
	n = 0;
	while (++n < tab.b)
		tab.pile[1][n - 1] = tab.pile[1][n];
	tab.pile[1][n - 1] = temp;
	write (1, "rb\n", 3);
	return (tab);
}

t_tab	rr(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[0][0];
	n = 0;
	while (++n < tab.a)
		tab.pile[0][n - 1] = tab.pile[0][n];
	tab.pile[0][n - 1] = temp;
	temp = tab.pile[1][0];
	n = 0;
	while (++n < tab.b)
		tab.pile[1][n - 1] = tab.pile[1][n];
	tab.pile[1][n - 1] = temp;
	write (1, "rr\n", 3);
	return (tab);
}

t_tab	rra(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.a - 1;
	temp = tab.pile[0][n];
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = temp;
	write (1, "rra\n", 4);
	return (tab);
}

t_tab	rrb(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.b - 1;
	temp = tab.pile[1][n];
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = temp;
	write (1, "rrb\n", 4);
	return (tab);
}

t_tab	rrr(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.a - 1;
	temp = tab.pile[0][n];
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = temp;
	n = tab.b - 1;
	temp = tab.pile[1][n];
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = temp;
	write (1, "rrr\n", 4);
	return (tab);
}
