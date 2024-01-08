/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:45:19 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/08 15:20:03 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	suite(t_tab tab)
{
	tab.b = 0;
	if (execute(tab) == 1)
	{
		free_tab (tab.pile);
		return (write(2, "error", 5));
	}
	if (check_ordered(tab) == 0)
		return (write(1, "OK\n", 3));
	return (write(1, "KO\n", 3));
}

int	main(int argc, char **argv)
{
	t_tab	tab;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv);
		argc = tab.a;
	}
	else
	{
		if (check_pile(argv, 1, argc) != 0)
			return (write(2, "error", 5));
		tab.pile = get_pile(argc, argv, 1);
		tab.a = argc - 1;
	}
	return (suite(tab));
}
