/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:52:56 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/10/12 13:41:18 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(unsigned int c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(long n, int *len);
void	ft_putunbr(unsigned long n, int *len);
void	ft_puthex(unsigned int n, char casesn, int *len);
void	ft_putptr(void *addr, int *len);

#endif
