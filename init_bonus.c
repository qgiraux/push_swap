/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:46:12 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/10 14:28:48 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	suite_check_pile(int n, int argc, char **argv)
{
	int	nn;
	int	m;

	while (++n < argc)
	{
		nn = ft_atoi(argv[n]);
		m = n;
		while (argv[++m])
			if (nn == ft_atoi(argv[m]))
				return (1);
	}
	return (0);
}

int	check_pile(char **argv, int start, int argc)
{
	int	n;
	int	m;

	n = start - 1;
	if (!argv[start])
		return (2);
	while (++n < argc)
	{
		if ((argv[n][0] < '0' || argv[n][0] > '9') && \
			(argv[n][0] != '-' && argv[n][0] != '+'))
			return (1);
		m = 0;
		while (argv[n][++m])
			if (argv[n][m] < 48 || argv[n][m] > 57)
				return (1);
		if ((ft_atoi(argv[n]) > 2147483647 || ft_atoi(argv[n]) \
			< -2147483648) || ft_strlen(argv[n]) > 11)
			return (1);
	}
	n = start - 1;
	return (suite_check_pile(n, argc, argv));
}

int	**get_pile(int argc, char **argv, int start)
{
	int	**pile;
	int	size;

	pile = malloc (2 * sizeof(int *));
	pile[0] = malloc ((argc + 1 - start) * sizeof(int));
	pile[1] = malloc ((argc + 1 - start) * sizeof(int));
	size = -1;
	while (++size + start < argc)
		pile[0][size] = ft_atoi(argv[size + start]);
	return (pile);
}

t_tab	one_arg(char **argv)
{
	char	**strs;
	t_tab	tab;
	int		i;

	strs = ft_split(argv[1], ' ');
	i = 0;
	while (strs[i])
		i++;
	tab.a = i;
	if (check_pile(strs, 0, tab.a) != 0)
	{
		tab.b = 1;
		free_split(strs);
		return (tab);
	}
	tab.b = 0;
	tab.pile = get_pile(i, strs, 0);
	free_split(strs);
	return (tab);
}
