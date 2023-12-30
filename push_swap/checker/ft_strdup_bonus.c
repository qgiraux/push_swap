/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:44:04 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 15:31:30 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_strdup(const char *str)
{
	int		n;
	char	*dest;

	dest = (char *) malloc (ft_strlen(str) + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	n = 0;
	while (str[n])
	{
		dest[n] = str[n];
		n++;
	}
	dest[n] = 0;
	return (dest);
}
