/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refill_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:34:40 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 17:26:04 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	refill_a(t_tab t)
{
	while (t.pile[0][t.a - 1] < t.pile[1][0])
		t = pa(t);
	t = rra(t);
	while (t.pile[0][t.a - 1] < t.pile[1][0])
		t = pa(t);
	t = rra(t);
	while (t.pile[0][t.a - 1] < t.pile[1][0])
		t = pa(t);
	t = rra(t);
	while (t.b > 0)
		t = pa(t);
	return (t);
}
