/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:36:45 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 11:42:01 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_tab	sa(t_tab tab)
{
	int	tmp;

	tmp = tab.pile[0][1];
	tab.pile[0][1] = tab.pile[0][0];
	tab.pile[0][0] = tmp;
	return (tab);
}

t_tab	sb(t_tab tab)
{
	int	tmp;

	tmp = tab.pile[1][1];
	tab.pile[1][1] = tab.pile[1][0];
	tab.pile[1][0] = tmp;
	return (tab);
}

t_tab	ss(t_tab tab)
{
	int	tmp;

	tmp = tab.pile[0][1];
	tab.pile[0][1] = tab.pile[0][0];
	tab.pile[0][0] = tmp;
	tmp = tab.pile[1][1];
	tab.pile[1][1] = tab.pile[1][0];
	tab.pile[1][0] = tmp;
	return (tab);
}