/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_dimension.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:35:57 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/07 10:23:20 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_get_dimension(int fd, t_map_entry *map)
{
	char	*line;

	line = get_next_line(fd);
	map->width = ft_strlen(line) - 1;
	map->height = 0;
	while (line)
	{
		line = get_next_line(fd);
		map->height++;
	}
}