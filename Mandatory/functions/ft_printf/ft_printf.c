/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:07:23 by mamounib          #+#    #+#             */
/*   Updated: 2022/11/25 09:36:50 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char c, va_list ap)
{
	int	i;

	i = 0;
	if (c == 'i' || c == 'd')
		i += ft_putnbr(va_arg(ap, int));
	else if (c == 'c')
		i += ft_putchr(va_arg(ap, int));
	else if (c == 's')
		i += ft_putstr(va_arg(ap, char *));
	else if (c == 'u')
		i += ft_putnbrb(va_arg(ap, unsigned int), "0123456789");
	else if (c == 'x')
		i += ft_putnbrb(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		i += ft_putnbrb(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		i += ft_putchr('%');
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_putpoint(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	else
		i += ft_putchr(c);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		c;

	va_start (ap, str);
	i = 0;
	c = 0;
	if (write(1, str, 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{	
			if (!str[i + 1])
				return (c);
			c += ft_check(str[++i], ap);
		}
		else
			c += ft_putchr(str[i]);
		i++;
	}
	va_end (ap);
	return (c);
}
