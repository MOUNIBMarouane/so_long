/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:13:03 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/19 22:01:46 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_init_value(int *var1, int *var2, int value)
{
	*var1 = value;
	*var2 = value;
}

void	ft_draw(t_mlx *m, char **map, int width, int height)
{
	t_dimension	d_img;
	t_position	p_count;
	t_position	p_img;

	ft_init_value(&d_img.w, &d_img.h, 60);
	m->mlx = mlx_init();
	m->mlx_win = mlx_new_window(m->mlx, width * 60, height * 60, "solong");
	if (!m->mlx_win)
		exit(1);
	ft_init_value(&p_count.y, &p_img.y, 0);
	while (p_count.y < height)
	{
		ft_init_value(&p_count.x, &p_img.x, 0);
		while (p_count.x < width)
		{
			ft_putimg(map[p_count.y][p_count.x], m, d_img, p_img);
			p_img.x += 60;
			p_count.x++;
		}
		p_img.y += 60;
		p_count.y++;
	}
}