/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:34:33 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/29 16:42:19 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

/**
 * TODO	: check the contents of the map file.
 * - [] check if the file is empty
 * - [] check if the ma
 * - [] check if the
 */
    
void    ft_parce(int fd, t_map_entry *map)
{
    char    *line;
    char    *str;
    
    line = get_next_line(fd);
    while (line)
    {
        str =  ft_strjoin(str, line);
        free(line);
        line = get_next_line(fd);
    }
    ft_printf("%s\n", str);
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
