/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:01:09 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/12 14:34:38 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - ('A' - 'a'));
	return (c);
}

/*#include <stdio.h>

int main() {
    char lowercase = '3';
    int uppercase = ft_tolower(lowercase);

    printf("Original character: %c\n", lowercase);
    printf("Uppercase character: %c\n", (char)uppercase); // Cast back to char

    return 0;
}*/
