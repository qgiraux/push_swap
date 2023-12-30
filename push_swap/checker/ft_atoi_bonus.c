/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:25:38 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 15:27:36 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

long long	ft_atoi(const char *str)
{
	int			n;
	long long	res;
	int			neg;

	neg = 1;
	n = 0;
	res = 0;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	if (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			neg = -neg;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = res * 10 + str[n] - 48;
		n++;
	}
	return (res * neg);
}