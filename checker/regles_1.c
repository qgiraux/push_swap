/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:02:14 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 13:56:25 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	return (tab);
}
t_tab	rb(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[1][0];
	n = 0;
	while (++n < tab.b)
		tab.pile[1][n - 1] = tab.pile[1][n];
	tab.pile[1][n - 1] = temp;
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
	return (tab);
}