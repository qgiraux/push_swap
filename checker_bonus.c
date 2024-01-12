/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:45:19 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/12 11:15:24 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

static int	suite(t_tab tab)
{
	int	check;

	check = execute(tab);
	if (check == 1)
	{
		free (tab.pile[1]);
		free (tab.pile[0]);
		free (tab.pile);
		return (write(2, "Error\n", 6));
	}
	check = check_ordered(tab);
	free (tab.pile[1]);
	free (tab.pile[0]);
	free (tab.pile);
	if (check == 0)
		return (write(1, "OK\n", 3));
	return (write(1, "KO\n", 3));
}

int	main(int argc, char **argv)
{
	t_tab	tab;

	tab.b = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv);
		argc = tab.a;
		if (tab.b == 1)
			return (write(2, "Error\n", 6));
	}
	else
	{
		if (check_pile(argv, 1, argc) != 0)
			return (write(2, "Error\n", 6));
		tab.pile = get_pile(argc, argv, 1);
		tab.a = argc - 1;
	}
	return (suite(tab));
}
