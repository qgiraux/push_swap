/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:45:19 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/30 15:25:15 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_tab	tab;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv[1]);
		argc = tab.a + 1;
		if (tab.b == 1)
			return (write(2, "error", 5));
	}
	if (check_pile(argv, 1, argc) != 0)
		return (write(2, "error", 5));
	else
	{
		tab.pile = get_pile(argc, argv, 1);
		tab.a = argc - 1;
	}
	tab.b = 0;
	execute(tab);
	if (check_ordered(tab) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
