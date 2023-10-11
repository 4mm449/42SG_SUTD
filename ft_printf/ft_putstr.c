/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:52:07 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/10/04 11:52:12 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void ft_putstr(char *str, int *len)
{
    if (!str)
    {
        ft_putstr("(null)", len);
        return ;
    }
    while (*str)
    {
        ft_putchar(*str, len);
        str += 1;
}
}