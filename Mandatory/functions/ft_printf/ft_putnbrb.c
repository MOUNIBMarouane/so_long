/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:35:23 by mamounib          #+#    #+#             */
/*   Updated: 2022/11/22 21:56:54 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrb(unsigned int nbr, char *baze)
{
	unsigned int	lenb;
	int				i;

	i = 0;
	lenb = 0;
	while (baze[lenb])
		lenb++;
	if (nbr >= lenb)
		i += ft_putnbrb(nbr / lenb, baze);
	i += ft_putchr(baze[nbr % lenb]);
	return (i);
}
