/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:23:53 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/27 10:31:33 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

int	ft_checkmap(char *filename)
{

	/**
	 * TODO	: check the mape file.
	 * - [] check if the map is exist
	 * - [] check if the map end by ".ber"
	 * - [] check if the map have a name
	 * TODO	: check the contents of the map file.
	 * - []
	 * - []
	 */
	int	fd;
	int	len;

	fd = open(filename,O_RDONLY);
	if (fd < 0)
	{
		printf("file not found: %s\n",filename);
	}
	else
	{
		len = ft_strlen(filename);
	}
	return 0;
}