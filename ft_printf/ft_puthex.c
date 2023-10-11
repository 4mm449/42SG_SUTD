/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:35:03 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/10/04 13:35:05 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_puthex(unsigned int n, char case, int *len)
{
    char *base;
    unsigned int base_len;

    base_len = 16;
    if (case == 'x')
        base = "0123456789abcdef";
    else if (case == 'X')
        base = "0123456789ABCDEF";  
    if (n < 16)
        ft_putchar(base[n % base_len], len);
    else
    {
        ft_puthex(n / base_len, case, len);
        ft_puthex(n % base_len, case, len);
    }
}