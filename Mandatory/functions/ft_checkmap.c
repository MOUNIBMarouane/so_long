/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:23:53 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/13 11:18:01 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

/**
* TODO	: check the map file.
* - [x] check if the map is exist
* - [x] check if the map end by ".ber"
* - [x] check if the map have a name (map.bre valid)
*        (.ber not valid) (/de/p/.ber not valid) (/de/p/ .ber  not valid)
*/

void	ft_checkmap(t_map_entry *map)
{
	map->fd = open(map->name, O_RDONLY);
	if (map->fd < 0)
		ft_printerror("file not found!");
	map->nlen = ft_strlen(map->name);
	if (map->nlen > 4)
	{	
		map->extention = ft_substr(map->name, map->nlen - 4, 4);
		if (ft_memcmp(map->extention, ".ber", 4) == 0)
		{
			if (map->name[map->nlen - 5] == '.'
				|| map->name[map->nlen - 5] == '/')
				ft_printerror("bad file name!");
		}
		else
			ft_printerror("bad extension!");
	}
}
