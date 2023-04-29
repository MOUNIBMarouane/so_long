/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inti_win.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:52:24 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/26 07:21:38 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_inti_wind(t_mlx *m, int width, int height)
{
	t_dimension	d_img;

	ft_init_value(&d_img.w, &d_img.h, 60);
	m->mlx = mlx_init();
	m->mlx_win = mlx_new_window(m->mlx, width * 60, height * 60, "solong");
	if (!m->mlx_win)
		exit(1);
}
