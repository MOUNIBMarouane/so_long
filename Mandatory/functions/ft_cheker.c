/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:34:33 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/13 11:15:07 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

/**
 * TODO	: check the contents of the map file.
 * - [x] check if the walls valide
 * - [x] check if have C(1.n) P(1) E(1) 0(else)
 */

void	ft_check_line(char *content, int width)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(content);
	if (content[width] == '\n')
		len = ft_strlen(content) - 1;
	if (width == 0)
		ft_printerror("map invalide !1 ");
	if (len != width)
		ft_printerror("map invalide !2 ");
}

void	ft_filter_content(t_map_entry *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->content[i])
	{
		ft_check_line(map->content[i], map->width);
		j = 0;
		while (j < map->width)
		{
			if (ft_memchr("10ECP", map->content[i][j], 5))
			{
				if (map->content[i][j] == 'C')
					map->n_c++;
				if (map->content[i][j] == 'E')
					map->n_e++;
				if (map->content[i][j] == 'P')
					map->n_p++;
				j++;
			}
			else
				ft_printerror("content map invalide !");
		}
		i++;
	}
}

void	ft_check_walls(char **map, int height, int width)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (j < width)
		{
			if (map[i][0] != '1' && map[i][width - 1] != '1')
				ft_printerror("content map invalide !");
			if ((i == 0 || i == height - 1) && map[i][j] != '1')
				ft_printerror("content map invalide !");
			j++;
		}
		i++;
	}
	if (map[i - 1][j] == '\n')
		ft_printerror("content map invalide !");
}

void	ft_cheker(t_map_entry *map)
{
	if (map->width != -1 && map->height != 0)
	{
		ft_filter_content(map);
		ft_check_walls(map->content, map->height, map->width);
		if (map->n_c < 1 || map->n_e != 1 || map->n_p != 1)
			ft_printerror("content map invalide !");
	}
	else
		ft_printerror("map invalide ! 3 ");
}
