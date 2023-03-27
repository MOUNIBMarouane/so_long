/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:09:00 by mamounib          #+#    #+#             */
/*   Updated: 2023/01/25 07:52:37 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *str);
int		ft_strchr(char *s, int c);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dist, const void *src, size_t n);
char	*ft_substr(char const *s, int start, int len);
char	*get_next_line(int fd);
#endif