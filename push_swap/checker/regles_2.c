/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:52:46 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 13:56:34 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"



t_tab	rra(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.a - 1;
	temp = tab.pile[0][n];
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = temp;
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
	return (tab);
}
