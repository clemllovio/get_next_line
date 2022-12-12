/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/12 15:39:26 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1] = "\0";
	static char	*stash;
	int			check_line;
	char		*line;

	check_line = -1;
	if (stash == NULL)
	{
		stash = malloc(sizeof(char) * 0);
		stash = "\0";
	}
	while (check_line == -1 && stash)
	{
		read(fd, buf, BUFFER_SIZE);
		stash = ft_strjoin(stash, buf);
		check_line = ft_check_line(stash);
	}
	line = ft_full_line(stash, check_line);
	stash = ft_new_stash(stash, check_line);
	return (line);
}
