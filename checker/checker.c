/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:45:19 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 14:15:45 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_tab	tab;
	char	*input;

	input = NULL;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		tab = one_arg(argv[1]);
		argc = tab.a + 1;
		if (tab.b == 1)
			return (write(2, "error", 5));
	}
	tab.b = 0;
	execute(tab, input);	

	if(check_ordered(tab) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}