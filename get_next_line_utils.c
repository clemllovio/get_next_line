/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:31 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/14 17:20:53 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{	
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	int		i;
	int		k;
	char	*new_s;

	i = 0;
	k = 0;
	if (!(stash))
	{
		stash = malloc(sizeof(char));
		if (!(stash))
			return (NULL);
		stash[0] = '\0';
	}
	new_s = malloc(sizeof(char) * (ft_strlen(stash) + ft_strlen(buffer) + 1));
	if (!new_s)
		return (free(stash), NULL);
	while (stash[i])
		new_s[k++] = stash[i++];
	i = 0;
	while (buffer[i])
		new_s[k++] = buffer[i++];
	new_s[k] = '\0';
	free(stash);
	return (new_s);
}

char	*ft_strdup(char *buffer)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(buffer);
	dest = malloc(sizeof(char) * (len + 1));
	if (!(dest))
		return (NULL);
	while (buffer[i])
	{
		dest[i] = buffer[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
