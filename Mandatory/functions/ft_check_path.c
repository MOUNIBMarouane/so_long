/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:19:40 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/29 07:59:57 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

char	**dupmap(char **map, int height)
{
	char	**map2;
	int		i;

	map2 = (char **)malloc(sizeof(char *) * height + 1);
	i = 0;
	while (i < height)
	{
		map2[i] = map[i];
		i++;
	}
	map2[i] = NULL;
	return (map2);
}

void	ft_flood_fill(t_map_entry *map, int x, int y)
{
	if (map->content[y][x] == 'E'
		|| map->content[y][x] == '1'
		|| map->content[y][x] == 'F')
		return ;
	if (map->content[y][x] == 'C')
		map->n_c++;
	if (map->content[y][x] == 'E')
		map->n_e++;
	map->content[y][x] = 'F';
	ft_flood_fill(map, x + 1, y);
	ft_flood_fill(map, x - 1, y);
	ft_flood_fill(map, x, y + 1);
	ft_flood_fill(map, x, y - 1);
}

void	ft_check_path(t_map_entry map)
{
	t_map_entry	map2;

	ft_default_map(&map2);
	map2.content = dupmap(map.content, map.dem.h);
	map2.dem.h = map.dem.h;
	map2.dem.w = map.dem.w;
	ft_chekervalues(&map2);
	printf("in player %d %d \n", map.p_pos.x, map.p_pos.y);
	ft_flood_fill(&map2, map.p_pos.x, map.p_pos.y);
	ft_chekervalues(&map2);
	if (map.n_c != map2.n_c || map.n_e != map2.n_e)
		ft_printerror("PLAYER CANT WIN !");
}
