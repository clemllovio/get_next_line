/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/09 13:19:16 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buf[BUFSIZE];
	static char	*stash;
	int			check_line;
	char		*line;

	check_line = -1;
	if (stash == NULL)
		stash = malloc(sizeof(char) * 0);
	while(check_line == -1 && stash)
	{
		read(fd, buf, BUFSIZE);
		stash = ft_strjoin(stash, buf);
		//printf("stash : %s\n", stash);
		check_line = ft_check_line(stash);
	}
	line = ft_full_line(stash, check_line);
	stash = ft_new_stash(stash, check_line);
	//printf("new stash : %s\n", stash);
	//printf("line : %s\n", line);
	return (line);
}
