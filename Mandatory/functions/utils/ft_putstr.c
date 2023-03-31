/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:59:17 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/30 08:35:39 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (s[i])
	{
		ft_putchr(s[i]);
		i++;
	}
	return (i);
}
