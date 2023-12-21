/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:19:18 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 17:10:37 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	convert(t_tab tab)
{
	int	i;
	int	n;
	int	k;
	int	m;

	i = -1;
	n = 0;
	k = 1;
	while (++i < tab.a)
		if (tab.pile[0][i] < tab.pile[0][n])
			n = i;
	tab.pile[2][n] = k;
	while (++k <= tab.a)
	{
		m = n;
		n = 0;
		while (tab.pile[2][n] > 0)
			n++;
		i = -1;
		while (++i < tab.a)
			if ((tab.pile[0][i] < tab.pile[0][n])
				&& (tab.pile[0][i] > tab.pile[0][m]))
				n = i;
		tab.pile[2][n] = k;
	}
	n = -1;
	while (++n < tab.a)
		tab.pile[0][n] = tab.pile[2][n];
	return (tab);
}
