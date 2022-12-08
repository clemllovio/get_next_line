/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:06:34 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/08 12:51:24 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFSIZE 10

# include <unistd.h>

// ENLEVER AVANT CORRECTION
# include <fcntl.h>
# include <stdio.h>

//get_next_line.c
char	*get_next_line(int fd);

//get_next_line_utils.c
#endif