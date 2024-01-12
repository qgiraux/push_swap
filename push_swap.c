/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:34:52 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/12 10:50:29 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	continue_push_swap(t_tab tab, int argc)
{
	if (check_ordered(tab) == 0)
	{
		free (tab.pile[1]);
		free (tab.pile[0]);
		free (tab.pile);
		return (0);
	}
	if (argc <= 4)
		tab.pile = algo_3(tab);
	else
		tab.pile = algo(tab);
	free (tab.pile[1]);
	free (tab.pile[0]);
	free (tab.pile);
	return (0);
}

int	main(int argc, char **argv)
{
	t_tab	tab;

	tab.b = 0;
	tab.a = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv);
		if (tab.b == 1)
			return (write(2, "Error\n", 6));
		argc = tab.a + 1;
	}
	else
	{
		if (check_pile(argv, 1, argc) != 0)
			return (write(2, "Error\n", 6));
		else
		{
			tab.pile = get_pile(argc, argv, 1);
			tab.a = argc - 1;
		}
	}
	return (continue_push_swap(tab, argc));
}
