/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:17:22 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/29 17:57:00 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free (split);
}

void	free_pile(int **pile)
{

	free (pile[0]);
	free (pile[1]);
	free (pile);
}

int	check_ordered(t_tab tab)
{
	int	i;

	i = 0;
	while (i < tab.a - 1)
	{
		if (tab.pile[0][i] > tab.pile[0][i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	bm1(int rankb, int b)
{
	if (rankb == 0)
		return (b - 1);
	return (rankb - 1);
}
