/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:48:20 by mamounib          #+#    #+#             */
/*   Updated: 2022/11/25 09:38:16 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchr(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int nbr);
int	ft_putnbrb(unsigned int nbr, char *baze);
int	ft_putpoint(unsigned long nbr, char *baze);

#endif