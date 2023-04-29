/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:48:11 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/29 09:57:03 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

char	*ft_strdup(char *s1)
{
	char	*p;

	p = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!p)
		return (0);
	else
		ft_strlcpy(p, (char *)s1, ft_strlen(s1) + 1);
	return (p);
}
