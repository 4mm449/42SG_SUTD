/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:37:25 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/10/09 12:37:40 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putunbr(unsigned long n, int *len)
{
    if (n <= 9)
    {
        ft_putchar(n + 48, len);
    }
    else
    {
        ft_putnbr(n / 10, len);
        ft_putnbr(n % 10, len);
    }
}