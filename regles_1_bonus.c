/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_1_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:02:14 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 15:25:33 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_tab	pab(t_tab tab)
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

t_tab	pbb(t_tab tab)
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

t_tab	rab(t_tab tab)
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
