/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:34:33 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/07 08:34:07 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

/**
 * TODO	: check the contents of the map file.
 * - [x] check if the file is empty
 * - [] check if the walls
 * - [] check if have C(1.n) P(1) E(1) 0(else)
 */

void	ft_check_walls(char **map, int height, int with)
{
	int	col;
	int	lin;

	height = height - 1;
	with = with - 1;
	lin = 0;
	while (lin <= height)
	{
		if (lin == 0 || lin == height)
		{
			col = 0;
			while (col <= with)
			{
				if (map[lin][col] != '1')
					ft_printerror("map Error");	
				col++;
			}
		}
		else if (map[lin][0] != '1' && map[lin][with] != '1')
			ft_printerror("map Error");
		lin++;
	}
}

void	ft_parce(int fd, t_map_entry *map)
{
	char	*line;
	char	*str;
	int		len;

	line = get_next_line(fd);
	map->width = ft_strlen(line);
	if (map->width != 0)
		map->height = 1;
	while (line)
	{
		str =  ft_strjoin(str, line);
		free(line);
		line = get_next_line(fd);
		map->height++;
	}
	len = ft_strlen(str);
	if (len == 0 && str[len - 1] == '\n' && str[0] == '\n')
		ft_printerror("map content invalid");
	map->content = ft_split(str, '\n');
	ft_check_walls(map->content, map->height, map->width);
	ft_putstr(str);
}

