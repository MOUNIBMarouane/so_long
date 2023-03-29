/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:23:53 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/29 15:21:26 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

/**
 * TODO	: check the map file.
 * - [x] check if the map is exist
 * - [x] check if the map end by ".ber"
 * - [x] check if the map have a name (map.bre valid) (.ber not valid) (/de/p/.ber  not valid) (/de/p/ .ber  not valid)
 */
void	ft_printerror(char *error)
{
	printf("%s \n", error);
	exit(1);
}

void	ft_checkmap(char *filename, t_map_entry *map)
{
	map->fd = open(filename,O_RDONLY);
	if (map->fd < 0)
		ft_printerror("file not found!");
	map->len = ft_strlen(filename);
	if(map->len > 4)
	{	
		map->extention = ft_substr(filename, map->len - 4, 4);
		if (ft_memcmp(map->extention,".ber",4) == 0)
		{
			if(filename[map->len - 5] == '.' || filename[map->len - 5] == '/' 
				|| filename[map->len - 5] == ' ')
				ft_printerror("bad file name!");
		}
		else
			ft_printerror("bad extension!");
		free(map->extention);
	}
}
