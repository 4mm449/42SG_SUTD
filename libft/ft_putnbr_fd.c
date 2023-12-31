/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:20:55 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/25 15:03:43 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	e_cases(int nb, int fd)
{
	if (nb == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i_to_c[12];
	int		index;

	index = 0;
	e_cases(n, fd);
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (n > 0)
	{
		i_to_c[index] = '0' + (n % 10);
		n /= 10;
		index += 1;
	}
	while (index > 0)
	{
		ft_putchar_fd(i_to_c[index - 1], fd);
		index -= 1;
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
