/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:48:00 by cllovio           #+#    #+#             */
/*   Updated: 2022/12/13 10:12:40 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *get_next_line(int fd)
{
    //Variables : static buffer, stash

    // securiser le fd et le BUFFERSIZE
    
    // SI buffer vide stash[0] = '\0' SINON =buffer

    // ft_read(buffer, stash)
    // ft_new_buffer(buffer)
    // return(stash)
}

char    *ft_read(char *buffer, char *stash)
{
    //Variables : check_line = BUFFER_SIZE

    //TANT QUE  cl == BUFFERSIZE
        //read
        //ajouter un \0 a la fin du buffer
        //ft_check_line(buffer)
        //stash = ft_strjoin(stash, buffer, check_line)

    //return(stash)
}

char    *ft_new_buffer(char *buffer)
{
    //on met ce qui a a la fin du buffer au debut puis on ajoute un \0
}

int check_line(char *buffer)
{
    //on parcours la chaine tant qu'il y a pas de \n
    // return i = soit emplacement du \n ou fin du buffer
}