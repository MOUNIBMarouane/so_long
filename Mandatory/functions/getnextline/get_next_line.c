/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:07:52 by mamounib          #+#    #+#             */
/*   Updated: 2023/01/25 05:22:27 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **str)
{
	free(*str);
	*str = NULL;
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*p;

	if (!s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(i);
	if (!p)
		return (0);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(p + (ft_strlen(s1)), s2, ft_strlen(s2));
	p[i - 1] = '\0';
	ft_free(&s1);
	return (p);
}

void	ft_read(int fd, char **str)
{
	char	*readed;
	int		nbrc;

	readed = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	nbrc = 1;
	while (ft_strchr(*str, '\n') == -1 && nbrc > 0)
	{
		nbrc = read(fd, readed, BUFFER_SIZE);
		if (nbrc <= 0)
		{
			ft_free(&readed);
			if (nbrc == -1)
				ft_free(str);
			return ;
		}
		readed[nbrc] = 0;
		*str = ft_strjoin(*str, readed);
	}
	ft_free(&readed);
}

char	*ft_get_ln(char **str)
{
	int		i;
	char	*line;
	char	*tmp;

	i = ft_strchr(*str, '\n');
	if (i == -1)
	{
		line = ft_substr(*str, 0, ft_strlen(*str));
		ft_free(str);
		return (line);
	}	
	line = ft_substr(*str, 0, i + 1);
	tmp = ft_substr(*str, i + 1, ft_strlen(*str) - i);
	ft_free(str);
	*str = ft_substr(tmp, 0, ft_strlen(tmp));
	ft_free(&tmp);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 && BUFFER_SIZE > 0 && read(fd, stash, 0) == -1)
	{
		ft_free(&stash);
		return (NULL);
	}
	ft_read(fd, &stash);
	if (!stash || *stash == '\0')
	{
		ft_free(&stash);
		return (NULL);
	}
	line = ft_get_ln(&stash);
	return (line);
}
