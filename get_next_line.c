/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:04:27 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/08 14:58:39 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[BUFSIZE + 1];
	int			result;

	result = read(fd, buf, BUFSIZE);
	if (result == -1 || result == 0)
		return (NULL);
	return ("ok");
}
