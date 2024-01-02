/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:31:26 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 15:25:33 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	maxfullb(int *pile, int b)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (++r < b)
		if (pile[r] > pile[i])
			i = r;
	return (i);
}

int	minfullb(int *pile, int b)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (++r < b)
		if (pile[r] < pile[i])
			i = r;
	return (i);
}
