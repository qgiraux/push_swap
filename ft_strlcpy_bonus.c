/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:14:56 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/02 10:46:32 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;

	if (size == 0)
		return (ft_strlen((char *)src));
	n = 0;
	while (n < size - 1 && src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return (ft_strlen((char *)src));
}
