/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:06:34 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/12 15:27:17 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>

// ENLEVER AVANT CORRECTION
# include <fcntl.h>
# include <stdio.h>

//get_next_line.c
char	*get_next_line(int fd);

//get_next_line_utils.c
int	    ft_check_line(char *stash);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_full_line(char *stash,int check_line);
char	*ft_new_stash(char	*stash, int check_line);

#endif