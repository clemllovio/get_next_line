/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:35:57 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/08 14:58:31 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		i;

	fd = open("text.txt", O_RDONLY);
	i = 0;
	while (i <= 6)
	{
		printf("%s\n", get_next_line(fd));
		i++;
	}
	return (0);
}
