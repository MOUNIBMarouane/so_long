/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:26:39 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/07 10:23:31 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../functions/getnextline/get_next_line.h"
# include <stdio.h>
# include <mlx.h>

typedef struct s_map_entry{
	int		fd;
	int		width;
	int		height;
	int		nlen;
	char	*extention;
	char	**content;
}	t_map_entry;

int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_putchr(int c);
int		ft_putstr(char *s);
int		ft_checkmap(char *filename, t_map_entry *map);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
char	**ft_getmap(int fd, int height);
void	ft_parce(int fd, t_map_entry *map);
void	ft_printerror(char *error);
void	ft_get_dimension(int fd, t_map_entry *map);
#endif