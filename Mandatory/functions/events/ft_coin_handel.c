/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coin_handel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:46:03 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/28 08:42:23 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

void	ft_coin_handel(t_env *env)
{
	t_dimension dem;

	dem.w = 60;
	dem.h = 60;
	env->map.n_c--;
	if (env->map.n_c == 0)
		env->m.img_d = mlx_xpm_file_to_image(env->m.mlx, IMGDO, &dem.w, &dem.h);
}
