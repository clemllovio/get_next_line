/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:06:34 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/14 14:04:50 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# include <unistd.h>
# include <stdlib.h>

// ENLEVER AVANT CORRECTION
# include <fcntl.h>
# include <stdio.h>

//get_next_line.c
char	*get_next_line(int fd);
char	*ft_read(int fd, char *buffer, char *stash);
char	*ft_new_buffer(char	*buffer);
int		ft_check_line(char	*buffer);
char	*ft_full_line(char *stash);

//get_next_line_utils.c
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_strdup(char *buffer);

#endif