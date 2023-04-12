/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:23:53 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/12 06:05:58 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

/**
 * TODO	: check the map file.
 * - [x] check if the map is exist
 * - [x] check if the map end by ".ber"
 * - [x] check if the map have a name (map.bre valid) (.ber not valid) (/de/p/.ber  not valid) (/de/p/ .ber  not valid)
 */


int	ft_checkmap(char *filename, t_map_entry *map)
{
	map->fd = open(filename,O_RDONLY);
	if (map->fd < 0)
		ft_printerror("file not found!");
	map->nlen = ft_strlen(filename);
	if (map->nlen > 4)
	{	
		map->extention = ft_substr(filename, map->nlen - 4, 4);
		if (ft_memcmp(map->extention,".ber",4) == 0)
		{
			if (filename[map->nlen - 5] == '.' || filename[map->nlen - 5] == '/'
				|| filename[map->nlen - 5] == ' ')
				ft_printerror("bad file name!");
		}
		else
			ft_printerror("bad extension!");
		free(map->extention);
	}
	return (map->fd);
}
