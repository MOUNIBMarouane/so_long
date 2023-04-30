/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:43:21 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/30 13:16:21 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_getmap(t_map_entry *map)
{
	int	i;

	map->fd = open(map->name, O_RDONLY);
	map->content = (char **)malloc(sizeof(char *) * map->dem.h + 1);
	if (!map->content)
		ft_printerror("allocation faild!");
	i = 0;
	while (i < map->dem.h)
	{
		map->content[i] = get_next_line(map->fd);
		i++;
	}
	map->content[i] = NULL;
}
