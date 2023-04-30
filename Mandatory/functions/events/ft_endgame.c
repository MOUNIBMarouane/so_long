/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endgame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:08:27 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/30 12:37:36 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

int	ft_endgame(t_env *env)
{
	ft_freem(env->map.content, env->map.dem.h);
	ft_putstr("END GAME!");
	exit(0);
}
