/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:58:06 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/26 09:39:15 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

int	ft_event(int keycode, t_env *env)
{
	if (keycode == 13 || keycode == 126)
		ft_moveup(env);
	if (keycode == 1 || keycode == 125)
		ft_movedown(env);
	if (keycode == 0 || keycode == 123)
		ft_moveleft(env);
	if (keycode == 2 || keycode == 124)
		ft_moveright(env);
	return (1);
}
