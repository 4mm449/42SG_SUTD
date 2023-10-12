/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:40:53 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/10/12 13:19:21 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putlhex(unsigned long n, char casesn, int *len)
{
	unsigned long	base_len;
	char			*base;

	base_len = 16;
	if (casesn == 'x')
		base = "0123456789abcdef";
	else if (casesn == 'X')
		base = "01234567890ABCDEF";
	if (n < 16)
		ft_putchar(base[n % base_len], len);
	else
	{
		ft_putlhex(n / base_len, casesn, len);
		ft_putlhex(n % base_len, casesn, len);
	}
}

void	ft_putptr(void *ptr, int *len)
{
	unsigned long	ptr_val;

	if (!ptr)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	else
	{
		ptr_val = (unsigned long)ptr;
		ft_putstr("0x", len);
		ft_putlhex(ptr_val, 'x', len);
	}
}
