/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:54:03 by mamounib          #+#    #+#             */
/*   Updated: 2022/11/22 21:56:47 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		i += ft_putstr("-2147483648");
		return (i);
	}
	if (nbr < 0)
	{
		i += ft_putchr('-');
		nbr *= -1;
	}
	if (nbr > 9)
		i += ft_putnbr(nbr / 10);
	i += ft_putchr(nbr % 10 + 48);
	return (i);
}
