/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:48:03 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/13 09:56:14 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

// ENLEVER AVANT CORRECTION

// get_next_line.c
char    *get_next_line(int fd);
char    *ft_read(char *buffer, char *stash);

// get_next_line_utils.c

#endif