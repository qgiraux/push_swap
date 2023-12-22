/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:47:34 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 11:22:22 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	execute(t_tab tab, char *input)
{
	if (ft_strncmp(input, "sa", 2) == 0)
		tab = sa(tab);
	//if (ft_strncmp(input, "sb", 2) == 0)
	//	tab = sb(tab);
	if (ft_strncmp(input, "ss", 2) == 0)
		tab = ss(tab);
	if (ft_strncmp(input, "pa", 2) == 0)
		tab = pa(tab);
	if (ft_strncmp(input, "pb", 2) == 0)
		tab = pb(tab);
	if (ft_strncmp(input, "ra", 2) == 0)
		tab = ra(tab);
	if (ft_strncmp(input, "rb", 2) == 0)
		tab = rb(tab);
	if (ft_strncmp(input, "rr", 2) == 0)
		tab = rr(tab);
	if (ft_strncmp(input, "rra", 3) == 0)
		tab = rra(tab);
	if (ft_strncmp(input, "rrb", 3) == 0)
		tab = rrb(tab);
	if (ft_strncmp(input, "rrr", 3) == 0)
		tab = rrr(tab);
	free (input);	
	return ;
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