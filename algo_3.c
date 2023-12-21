/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:24:16 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 15:31:33 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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