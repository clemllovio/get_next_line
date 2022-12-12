/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:31 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/12 15:35:12 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check_line(char *stash)
{
	int	i;

	i = 0;
	while (stash[i + 1])
	{
		if (stash[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

size_t	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		k;
	char	*new_s;

	i = 0;
	k = 0;
	new_s = malloc(sizeof(char) * (ft_strlen(s1) + BUFFER_SIZE + 1));
	if (!(new_s))
		return (NULL);
	while (s1[i])
	{
		new_s[k] = s1[i++];
		k++;
	}
	i = 0;
	while (s2[i])
	{
		new_s[k] = s2[i++];
		k++;
	}
	new_s[k] = '\0';
	free(s1);
	return (new_s);
}

char	*ft_full_line(char *stash,int check_line)
{
	int		i;
	char	*new_s;

	i = 0;
	new_s = malloc(sizeof(char) * (ft_strlen(stash) - check_line + 1));
	while (stash[i] != '\n')
	{
		new_s[i] = stash[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

char	*ft_new_stash(char	*stash, int check_line)
{
	int	i;
	int	size;
	int k;
	char	*new_s;

	i = 0;
	size = 0;
	k = check_line + 1;
	while (stash[check_line + 1])
	{
		check_line++;
		size++;
	}
	new_s = malloc(sizeof(char) * size);
	while (stash[k])
	{
		new_s [i] = stash[k];
		i++;
		k++;
	}
	new_s[i] = '\0';
	return (new_s);
}
