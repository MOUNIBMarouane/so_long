/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_default_starct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:57:19 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/13 06:59:43 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_default_stract(t_map_entry *map)
{
	map->fd = -1;
	map->width = -1;
	map->height = -1;
	map->nlen = -1;
	map->n_c = 0;
	map->n_p = 0;
	map->n_e = 0;
}