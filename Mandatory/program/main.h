/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:26:39 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/13 07:01:53 by mamounib         ###   ########.fr       */
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
	int		n_c;
	int		n_p;
	int		n_e;
	char	*name;
	char	*extention;
	char	**content;
}	t_map_entry;

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_putchr(int c);
int		ft_putstr(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
void	ft_getmap(t_map_entry *map);
void	ft_checkmap(t_map_entry *map);
void	ft_cheker(t_map_entry *map);
void	ft_printerror(char *error);
void	ft_get_dimension(t_map_entry *map);
void	ft_default_stract(t_map_entry *map);
#endif