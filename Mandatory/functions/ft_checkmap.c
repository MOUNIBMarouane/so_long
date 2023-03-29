/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:23:53 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/29 11:07:23 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

int	ft_checkmap(char *filename)
{

	/**
	 * TODO	: check the mape file.
	 * - [x] check if the map is exist
	 * - [x] check if the map end by ".ber"
	 * - [x] check if the map have a name (map.bre valid) (.ber not valid) (/de/p/.ber  not valid)
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
		char	*extention;

		extention = malloc(sizeof(char) * 4);
		extention[0] = filename[len - 4];
		extention[1] = filename[len - 3];
		extention[2] = filename[len - 2];
		extention[3] = filename[len - 1];
		printf("file found: %s\n",extention);
		printf("file found: %s\n",extention);
		if (ft_memcmp(extention,".ber",4) == 0 && len > 4)
		{
			if(filename[len - 5] == '.' || filename[len - 5]== '/')
			{
				printf("file named .ber is not for map should hab an extantion .ber: %s\n",filename);
				close(fd);
				return (1);
			}
			else
				printf("file found");
		}
		else
			printf("dont habe .ber");
		free(extention);
	}
	return 0;
}

int main(int argc, char  **argv)
{
	ft_checkmap(argv[1]);
	return 0;
}