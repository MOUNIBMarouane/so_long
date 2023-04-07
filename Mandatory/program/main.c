/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 08:04:59 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/07 10:24:59 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	t_map_entry	map;
	int			fd;
	int			i;
	char		*line;

	(void)argc;
	i = 0;
	fd = ft_checkmap(argv[1], &map);
	printf(" extantent :%s\n",map.extention);
	ft_get_dimension(fd, &map);
	map.content = (char **)malloc(sizeof(char *) * map.height + 1);
	if (!map.content)
		return (1);
	i = 0;
	while (i < map.height)
	{
		line = get_next_line(fd);
		printf("%s\n",map.content[i]);

		i++;
	}
	map.content[i] = NULL;
	ft_getmap(fd, map.height);
	printf("fd :%d\n",map.fd);
	printf("with :%d\n",map.width);
	printf("height :%d\n",map.height);
	while (i < map.height)
	{
		printf("%s\n",map.content[i]);
		i++;
	}
}