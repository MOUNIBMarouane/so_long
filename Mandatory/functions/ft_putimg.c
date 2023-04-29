/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putimg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 03:45:37 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/29 09:32:33 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_putimg(char c, t_mlx *m, t_position p_img)
{
	if (c == '1')
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img_w, p_img.x, p_img.y);
	else if (c == 'E')
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img_d, p_img.x, p_img.y);
	else if (c == 'P')
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img_p, p_img.x, p_img.y);
	else if (c == 'C')
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->img_g, p_img.x, p_img.y);
}
