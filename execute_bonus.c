/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:24:41 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/10 15:05:32 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	execute(t_tab tab)
{
	char	*input;
	char	cmp;

	tab.b = 0;
	input = get_next_line(0);
	if (!input)
		return (1);
	cmp = ft_strncmp(input, "\n", 1);
	while (cmp > 0)
	{
		if (input == NULL)
			break ;
		tab = execute_2(tab, input);
		if (input)
			free (input);
		if (tab.a < 0)
			return (1);
		input = get_next_line(0);
		if (input == NULL)
			break ;
		cmp = ft_strncmp(input, "\n", 1);
	}	
	return (0);
}

t_tab	execute_2(t_tab tab, char *input)
{
	if (ft_strncmp(input, "sa\n", 3) == 0)
		tab = sab(tab);
	else if (ft_strncmp(input, "sb\n", 3) == 0)
		tab = sbb(tab);
	else if (ft_strncmp(input, "ss\n", 3) == 0)
		tab = ssb(tab);
	else if (ft_strncmp(input, "pa\n", 3) == 0)
		tab = pab(tab);
	else if (ft_strncmp(input, "pb\n", 3) == 0)
		tab = pbb(tab);
	else if (ft_strncmp(input, "ra\n", 3) == 0)
		tab = rab(tab);
	else if (ft_strncmp(input, "rb\n", 3) == 0)
		tab = rbb(tab);
	else if (ft_strncmp(input, "rr\n", 3) == 0)
		tab = rrb(tab);
	else if (ft_strncmp(input, "rra\n", 3) == 0)
		tab = rrab(tab);
	else if (ft_strncmp(input, "rrb\n", 3) == 0)
		tab = rrbb(tab);
	else if (ft_strncmp(input, "rrr\n", 3) == 0)
		tab = rrrb(tab);
	else
		tab.a = -1;
	return (tab);
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
