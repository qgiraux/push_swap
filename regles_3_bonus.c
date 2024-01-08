/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_3_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:36:45 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/08 14:58:41 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_tab	sab(t_tab tab)
{
	int	tmp;

	if (tab.a < 2)
		return (tab);
	tmp = tab.pile[0][1];
	tab.pile[0][1] = tab.pile[0][0];
	tab.pile[0][0] = tmp;
	return (tab);
}

t_tab	sbb(t_tab tab)
{
	int	tmp;

	if (tab.b < 2)
		return (tab);
	tmp = tab.pile[1][1];
	tab.pile[1][1] = tab.pile[1][0];
	tab.pile[1][0] = tmp;
	return (tab);
}

t_tab	ssb(t_tab tab)
{
	int	tmp;

	if (tab.b < 2 || tab.a < 2)
		return (tab);
	tmp = tab.pile[0][1];
	tab.pile[0][1] = tab.pile[0][0];
	tab.pile[0][0] = tmp;
	tmp = tab.pile[1][1];
	tab.pile[1][1] = tab.pile[1][0];
	tab.pile[1][0] = tmp;
	return (tab);
}
