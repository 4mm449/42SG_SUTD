/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:01:09 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/13 09:30:56 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

/*#include <stdio.h>

int main() {
    char lowercase = '3';
    int uppercase = ft_toupper(lowercase);

    printf("Original character: %c\n", lowercase);
    printf("Uppercase character: %c\n", (char)uppercase); // Cast back to char

    return 0;
}*/
