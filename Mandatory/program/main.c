/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 08:04:59 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/20 07:55:37 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_chekervalues(t_map_entry *map)
{
	int	i;

	i = 0;
	printf("fd :%d \n", (*map).fd);
	printf("width :%d \n", (*map).width);
	printf("height :%d \n", (*map).height);
	printf("name :%s \n", (*map).name);
	printf("nlen :%d \n", (*map).nlen);
	printf("extention :%s \n", (*map).extention);
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
		ft_default_stract(&env.map);
		ft_checkmap(&env.map);
		ft_get_dimension(&env.map);
		ft_getmap(&env.map);
		ft_cheker(&env.map);
		ft_chekervalues(&env.map);
		ft_draw(&env.m, env.map.content, env.map.width, env.map.height);
		mlx_hook(env.m.mlx_win, 2, 0L, ft_event, &env);
		mlx_loop(env.m.mlx);
	}
	else
		ft_printerror("you should enter just 2 args!");
	return (0);
}
