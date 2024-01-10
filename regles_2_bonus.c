/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:52:46 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/10 14:22:27 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_tab	rbb(t_tab tab)
{
	int	temp;
	int	n;

	if (tab.b < 2)
		return (tab);
	temp = tab.pile[1][0];
	n = 0;
	while (++n < tab.b)
		tab.pile[1][n - 1] = tab.pile[1][n];
	tab.pile[1][n - 1] = temp;
	return (tab);
}

t_tab	rrb(t_tab tab)
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

t_tab	rrab(t_tab tab)
{
	int	temp;
	int	n;

	if (tab.a < 2)
		return (tab);
	n = tab.a - 1;
	temp = tab.pile[0][n];
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = temp;
	return (tab);
}

t_tab	rrbb(t_tab tab)
{
	int	temp;
	int	n;

	if (tab.b < 2)
		return (tab);
	n = tab.b - 1;
	temp = tab.pile[1][n];
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = temp;
	return (tab);
}

t_tab	rrrb(t_tab tab)
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
	return (tab);
}
