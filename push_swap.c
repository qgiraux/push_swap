/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:34:52 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 16:59:07 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	tab;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv);
		argc = tab.a + 1;
		if (tab.b == 1)
			return (write(2, "error", 5));
	}
	else
	{
		if (check_pile(argv, 1, argc) != 0)
			return (write(2, "error", 5));
		else
		{
			tab.pile = get_pile(argc, argv, 1);
			tab.a = argc - 1;
		}
	}
	tab.b = 0;
	if (check_ordered(tab) == 0)
		return (0);
	if (argc <= 4)
		tab.pile = algo_3(tab);
	else
		tab.pile = algo(tab);
	return (0);
}
