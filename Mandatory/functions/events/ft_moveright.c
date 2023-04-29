/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moveright.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:36:11 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/27 11:46:56 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

void	ft_moveright(t_env *env)
{
	t_position	p;
	char		p_to;

	p.x = env->map.p_pos.x;
	p.y = env->map.p_pos.y;
	p.x += 1;
	p_to = env->map.content[p.y][p.x];
	if (env->map.content[p.y][p.x] != '1')
	{
		if (p_to == 'C')
			ft_coin_handel(env);
		if (p_to == 'E' && env->map.n_c == 0)
			ft_endgame();
		if (p_to == 'E' && env->map.n_c != 0)
			return ;
		env->map.content[p.y][p.x - 1] = '0';
		env->map.content[p.y][p.x] = 'P';
		env->map.p_pos.x = p.x;	
		mlx_clear_window(env->m.mlx, env->m.mlx_win);
		ft_draw(&env->m, env->map.content, env->map.dem.w, env->map.dem.h);
		ft_chekervalues(&env->map);
	}
}