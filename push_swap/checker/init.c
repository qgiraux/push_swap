/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:33:21 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 14:03:12 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	suite_check_pile(int n, int argc, char **strs)
{
	int	nn;
	int	m;

	while (++n < argc)
	{
		nn = ft_atoi(strs[n]);
		m = n;
		while (strs[++m])
			if (nn == ft_atoi(strs[m]))
				return (1);
	}
	return (0);
}

int	check_pile(char **strs, int start, int argc)
{
	int	n;
	int	m;

	n = start - 1;
	if (!strs[start])
		return (2);
	while (strs[++n])
	{
		if ((strs[n][0] < '0' || strs[n][0] > '9') && strs[n][0] != '-')
			return (1);
		m = 0;
		while (strs[n][++m])
			if (strs[n][m] < 48 || strs[n][m] > 57)
				return (1);
		if (ft_atoi(strs[n]) > 2147483647 || ft_atoi(strs[n]) < -2147483648)
			return (1);
	}
	n = start - 1;
	return (suite_check_pile(n, argc, strs));
}

int	**get_pile(int argc, char **argv, int start)
{
	int	**pile;
	int	size;

	pile = (int **) malloc (2 * sizeof(int *));
	pile[0] = (int *) malloc ((argc) * sizeof(int));
	pile[1] = (int *) malloc ((argc) * sizeof(int));
	size = -1;
	while (++size < argc - start)
		pile[0][size] = ft_atoi(argv[size + start]);
	return (pile);
}

t_tab	one_arg(char *arg)
{
	char	**strs;
	t_tab	tab;
	int		i;

	strs = ft_split(arg, ' ');
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