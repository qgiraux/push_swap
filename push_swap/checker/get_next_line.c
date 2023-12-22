/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:19:34 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/22 15:37:58 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*set_line(char *line)
{
	int		i;
	char	*reste;

	i = 0;
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (NULL);
	reste = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (reste == 0)
	{
		free (reste);
		reste = NULL;
	}
	line[i + 1] = '\0';
	return (reste);
}

char	*fill_line(char *stock, char *buffer, int fd)
{
	ssize_t	readsize;
	char	*tmp;

	readsize = 1;
	while (readsize > 0)
	{
		readsize = read(fd, buffer, 10);
		if (readsize < 0)
		{
			if (stock)
				free(stock);
			return (NULL);
		}
		if (readsize == 0)
			return (stock);
		buffer[readsize] = 0;
		if (!stock)
			stock = ft_strdup("");
		tmp = stock;
		stock = ft_strjoin(tmp, buffer);
		free(tmp);
		if (ft_strchr(buffer, '\n'))
			return (stock);
	}
	return (stock);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*stock[4096];

	buffer = (char *) malloc ((10+ 1) * sizeof(char));
	if (10 <= 0 || fd < 0 || (read(fd, 0, 0) < 0))
	{
		free (stock[fd]);
		stock[fd] = NULL;
		free (buffer);
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_line(stock[fd], buffer, fd);
	free (buffer);
	buffer = NULL;
	if (!line || line[0] == 0)
	{
		free (stock[fd]);
		stock[fd] = NULL;
		return (NULL);
	}
	stock[fd] = set_line(line);
	return (line);
}
