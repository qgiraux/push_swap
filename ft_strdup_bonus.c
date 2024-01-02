/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:44:04 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/02 10:46:25 by qgiraux          ###   ########.fr       */
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
