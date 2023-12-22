/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:28:34 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 11:26:32 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"




char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		m;
	char	*dest;

	m = 0;
	n = 0;
	dest = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1[n])
	{
		dest[n] = s1[n];
		n++;
	}
	while (s2[m])
	{
		dest[n + m] = s2[m];
		m++;
	}
	dest[n + m] = '\0';
	return (dest);
}
