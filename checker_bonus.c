/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:45:19 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/10 15:10:56 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_tab	tab;
	int		check;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv);
		argc = tab.a;
		if (tab.b == 1)
			return (write(2, "error", 5));
	}
	else
	{
		if (check_pile(argv, 1, argc) != 0)
			return (write(2, "error", 5));
		tab.pile = get_pile(argc, argv, 1);
		tab.a = argc - 1;
	}
	check = execute(tab);
	if (check == 1)
	{
		free (tab.pile[1]);
	free (tab.pile[0]);
	free (tab.pile);
		return (write(2, "error", 5));
	}
	check = check_ordered(tab);
	free (tab.pile[1]);
	free (tab.pile[0]);
	free (tab.pile);
	if (check == 1)
		return (write(1, "OK\n", 3));
	return (write(1, "KO\n", 3));
}
