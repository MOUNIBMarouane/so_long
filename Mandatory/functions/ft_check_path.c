/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:19:40 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/18 21:48:20 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

char	**dupmap(char **map, int height, int width)
{
	char	**map2;
	int		i;

	map2 = (char **)malloc(sizeof(char *) * height + 1);
	i = 0;
	while (i < height)
	{
		map2[i] = map[i];
		i++;
	}
	map2[i] = NULL;
	return (map2);
}

void	ft_check_path(char **map)
{
	int	i;
}
