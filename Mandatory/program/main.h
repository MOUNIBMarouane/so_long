/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:26:39 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/29 16:02:56 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../functions/getnextline/get_next_line.h"
# include "../functions/printf/ft_printf.h"
# include <stdio.h>
# include <mlx.h>
typedef struct  s_map_entry{
    int fd;
    int len;
    char *extention;
    char *name;
} t_map_entry;

void	ft_checkmap(char *filename, t_map_entry *map);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
#endif