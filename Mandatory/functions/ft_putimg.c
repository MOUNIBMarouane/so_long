/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putimg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 03:45:37 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/18 21:14:03 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_putimg(char c, t_mlx *m, t_dimension img_d, t_position p_img)
{
	if (c == '1')
	{
		m->img = mlx_xpm_file_to_image(m->mlx, IMGW, &img_d.w, &img_d.h);
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img, p_img.x, p_img.y);
	}
	else if (c == 'E')
	{
		m->img = mlx_xpm_file_to_image(m->mlx, IMGDO, &img_d.w, &img_d.h);
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img, p_img.x, p_img.y);
	}
	else if (c == 'P')
	{
		m->img = mlx_xpm_file_to_image(m->mlx, IMGPL, &img_d.w, &img_d.h);
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img, p_img.x, p_img.y);
	}
	else if (c == 'C')
	{
		m->img = mlx_xpm_file_to_image(m->mlx, IMGG, &img_d.w, &img_d.h);
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img, p_img.x, p_img.y);
	}
}
