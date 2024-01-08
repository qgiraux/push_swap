/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:24:41 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/08 15:13:58 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	execute(t_tab tab)
{
	char	*input;
	char	cmp;
	int		check;

	check = 0;
	input = get_next_line(0);
	if (!input)
		return (check);
	cmp = ft_strncmp(input, "\n", 1);
	while (cmp > 0)
	{
		if (input == NULL)
			break ;
		check = execute_2(tab, input);
		if (input)
			free (input);
		if (check == 1)
			break ;
		input = get_next_line(0);
		if (input == NULL)
			break ;
		cmp = ft_strncmp(input, "\n", 1);
	}	
	return (check);
}

int	execute_2(t_tab tab, char *input)
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
		return (1);
	return (0);
}

int	check_ordered(t_tab tab)
{
	int	i;

	i = 0;
	if (tab.b > 0)
	{
		free_tab(tab.pile);
		return (1);
	}
	while (i < tab.a - 1)
	{
		if (tab.pile[0][i] > tab.pile[0][i + 1])
		{
			free_tab(tab.pile);
			return (1);
		}
		i++;
	}
	free_tab(tab.pile);
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

void	free_tab(int **pile)
{	
	free (pile[0]);
	free (pile[1]);
	free (pile);
}
