/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:44:35 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/10/12 13:27:12 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	chkparam(va_list args, const char format, int *len)
{
	if (format == 'c')
		ft_putchar(va_arg(args, unsigned int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (format == 'x' || format == 'X')
		ft_puthex(va_arg(args, unsigned int), format, len);
	else if (format == 'u')
		ft_putunbr(va_arg(args, unsigned int), len);
	else if (format == 'p')
		ft_putptr(va_arg(args, void *), len);
	else if (format == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i += 1;
			chkparam(args, format[i], &count);
		}
		else
			ft_putchar(format[i], &count);
		i += 1;
	}
	va_end(args);
	return (count);
}
