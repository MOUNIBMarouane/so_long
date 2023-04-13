/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 08:04:59 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/13 11:18:55 by mamounib         ###   ########.fr       */
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
	t_map_entry	map;

	if (argc == 2)
	{
		map.name = argv[1];
		ft_default_stract(&map);
		ft_checkmap(&map);
		ft_get_dimension(&map);
		ft_getmap(&map);
		ft_chekervalues(&map);
		ft_cheker(&map);
	}
	else
		ft_printerror("you should enter just 2 args!");
	return (0);
}
