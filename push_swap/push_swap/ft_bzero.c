/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:21 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 15:56:29 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *str, size_t size)
{
	size_t			n;
	unsigned char	*tmp;

	tmp = (unsigned char *) str;
	n = 0;
	while (n < size)
	{
		tmp[n] = '\0';
		n++;
	}
	return ;
}
