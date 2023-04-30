/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_default_stract.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:57:19 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/30 12:53:30 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_default_mlx(t_mlx *mlxi)
{
	t_dimension	dem;

	dem.w = 60;
	dem.h = 60;
	mlxi->img_w = mlx_xpm_file_to_image(mlxi->mlx, IMGW , &dem.w, &dem.h);
	if (!mlxi->img_w)
		ft_printerror("invalid picture");
	mlxi->img_g = mlx_xpm_file_to_image(mlxi->mlx, IMGG, &dem.w, &dem.h);
	if (!mlxi->img_g)
		ft_printerror("invalid picture");
	mlxi->img_d = mlx_xpm_file_to_image(mlxi->mlx, IMGDC, &dem.w, &dem.h);
	if (!mlxi->img_d)
		ft_printerror("invalid picture");
	mlxi->img_p = mlx_xpm_file_to_image(mlxi->mlx, IMGPL, &dem.w, &dem.h);
	if (!mlxi->img_p)
		ft_printerror("invalid picture");
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
