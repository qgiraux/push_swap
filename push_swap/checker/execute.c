/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:24:41 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 11:41:15 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

void	execute(t_tab tab, char *input)
{
	input = get_next_line(0);
	while (ft_strncmp(input, "\n", 1) > 0)
	{
		if(input == NULL)
			break;
		if (ft_strncmp(input, "sa\n", 3) == 0)
			tab = sa(tab);
		if (ft_strncmp(input, "sb\n", 3) == 0)
			tab = sb(tab);
		if (ft_strncmp(input, "ss\n", 3) == 0)
			tab = ss(tab);
		if (ft_strncmp(input, "pa\n", 3) == 0)
			tab = pa(tab);
		if (ft_strncmp(input, "pb\n", 3) == 0)
			tab = pb(tab);
		if (ft_strncmp(input, "ra\n", 3) == 0)
			tab = ra(tab);
		if (ft_strncmp(input, "rb\n", 3) == 0)
			tab = rb(tab);
		if (ft_strncmp(input, "rr\n", 3) == 0)
			tab = rr(tab);
		if (ft_strncmp(input, "rra\n", 3) == 0)
			tab = rra(tab);
		if (ft_strncmp(input, "rrb\n", 3) == 0)
			tab = rrb(tab);
		if (ft_strncmp(input, "rrr\n", 3) == 0)
			tab = rrr(tab);
		if (input)
			free (input);
		input = get_next_line(0);
		if(input == NULL)
			break;
	}
		
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
	free (tab.pile[0]);
	free (tab.pile[1]);
	free (tab.pile);
	return (0);
}

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