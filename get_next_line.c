/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/14 17:31:31 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = "\0";
	char		*stash;

	stash = NULL;
	if (fd < 0 || read(fd, buffer, 0) < 0 || BUFFER_SIZE <= 0)
	{
		stash = NULL;
		buffer[0] = '\0';
		return (NULL);
	}
	if (read(fd, NULL, 0) == -1)
		return (NULL);
	if (ft_strlen(buffer) != 0)
		stash = ft_strdup(buffer);
	stash = ft_read(fd, buffer, stash);
	if (stash)
		ft_new_buffer(buffer);
	else
		stash = NULL;
	return (stash);
}

char	*ft_read(int fd, char *buffer, char *stash)
{
	int		read_bytes;
	char	*line;

	read_bytes = 1;
	while (read_bytes != 0 && ft_check_line(buffer) == 1)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
			return (free(stash), NULL);
		if (read_bytes == 0)
			buffer[0] = '\0';
		buffer[read_bytes] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	line = ft_full_line(stash);
	return (line);
}

char	*ft_new_buffer(char	*buffer)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
	{
		while (buffer[i + 1])
		{
			buffer[j] = buffer[i + 1];
			j++;
			i++;
		}
	}
	buffer[j] = '\0';
	return (buffer);
}

int	ft_check_line(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_full_line(char *stash)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(stash[i]))
		return (free(stash), NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		line = malloc(sizeof(char) * (i + 2));
	else
		line = malloc(sizeof(char) * (i + 1));
	if (!(line))
		return (NULL);
	while (stash[j] && stash[j] != '\n')
	{
		line[j] = stash[j];
		j++;
	}
	if (stash[j] == '\n')
	{
		line[j] = '\n';
		j++;
	}
	line[j] = '\0';
	free(stash);
	return (line);
}
