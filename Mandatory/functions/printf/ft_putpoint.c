/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:09:11 by mamounib          #+#    #+#             */
/*   Updated: 2022/11/22 21:57:16 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(unsigned long nbr, char *baze)
{
	int	i;

	i = 0;
	if (nbr >= 16)
		i += ft_putpoint(nbr / 16, baze);
	i += ft_putchr(baze[nbr % 16]);
	return (i);
}
