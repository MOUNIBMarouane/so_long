/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_default_stract.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:57:19 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/29 12:45:09 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_default_mlx(t_mlx *mlx)
{
	t_dimension dem;

	dem.w = 60;
	dem.h = 60;
	mlx->img_w = mlx_xpm_file_to_image(mlx->mlx, IMGW, &dem.w, &dem.h);
	mlx->img_g = mlx_xpm_file_to_image(mlx->mlx, IMGG, &dem.w, &dem.h);
	mlx->img_d = mlx_xpm_file_to_image(mlx->mlx, IMGDC, &dem.w, &dem.h);
	mlx->img_p = mlx_xpm_file_to_image(mlx->mlx, IMGPL, &dem.w, &dem.h);
}

void	ft_default_map(t_map_entry *map)
{
	map->fd = -1;
	map->dem.w = -1;
	map->dem.h = -1;
	map->nlen = -1;
	map->n_c = 0;
	map->n_p = 0;
	map->n_e = 0;
	map->p_move = 0;
}
