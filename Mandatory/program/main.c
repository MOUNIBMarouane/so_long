/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 08:04:59 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/30 13:15:12 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/** /TODO
 * 	error map game create
 *  protection all function
 */
void	ft_chekervalues(t_map_entry *map)
{
	int	i;

	i = 0;
	// printf("fd :%d \n", (*map).fd);
	printf("width :%d \n", (*map).dem.w);
	// printf("height :%d \n", (*map).dem.h);
	// printf("name :%s \n", (*map).name);
	printf("exits :%d \n", (*map).n_e);
	printf("coins :%d \n", (*map).n_c);
	printf("player %d %d \n", (*map).p_pos.x, (*map).p_pos.y);
	if (((*map).content) == NULL)
		ft_printerror("void map");
	while ((*map).content[i])
	{
		printf("line :%s", (*map).content[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_env		env;

	if (argc == 2)
	{
		env.map.name = argv[1];
		ft_default_map(&env.map);
		ft_checkmap(&env.map);
		ft_get_dimension(&env.map);
		ft_getmap(&env.map);
		ft_cheker(&env.map);
		ft_check_path(env.map);
		ft_inti_wind(&env.m, env.map.dem.w, env.map.dem.h);
		ft_default_mlx(&env.m);
		ft_draw(&env.m, env.map.content, env.map.dem.w, env.map.dem.h);
		mlx_key_hook(env.m.mlx_win, ft_event, &env);
		mlx_hook(env.m.mlx_win, 17, 0, ft_endgame, &env);
		mlx_loop(env.m.mlx);
	}
	else
		ft_printerror("you should enter just 2 args!");
	return (0);
}
