/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:19:34 by qgiraux           #+#    #+#             */
/*   Updated: 2024/01/02 10:47:01 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#define BUFFER_SIZE 1

static char	*fill_line(char *stock, char *buffer, int fd)
{
	ssize_t	readsize;
	char	*tmp;

	readsize = 1;
	while (readsize > 0)
	{
		readsize = read(fd, buffer, BUFFER_SIZE);
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

static char	*set_line(char *line)
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

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*stock;

	buffer = (char *) malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (BUFFER_SIZE <= 0 || fd < 0 || (read(fd, 0, 0) < 0))
	{
		free (stock);
		stock = NULL;
		free (buffer);
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_line(stock, buffer, fd);
	free (buffer);
	buffer = NULL;
	if (!line || line[0] == 0 || line == NULL)
	{
		free (stock);
		stock = NULL;
		return (NULL);
	}
	stock = set_line(line);
	return (line);
}
