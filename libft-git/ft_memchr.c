/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:25:01 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/13 14:43:54 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*result;

	result = (ft_strchr((const char *)s, c));
	if (result && (size_t)(result - ((const char *)s) < n))
	{
		return ((void *)result);
	}
	return (NULL);
}

/*int main() 
{
    const char *str = "Hello, World!";
    const char *str1 = "Hello, World!";
    int search_char = 'l';
    size_t n = 3;

    void *result = ft_memchr(str, search_char, n);
    void *result1 = ft_memchr(str1, search_char, n);

    if (result != NULL) {
        printf("(ft_memchr)> Character '%c' found at position: %ld\n", search_char, (char *)result - str);
        printf("(memchr)> Character '%c' found at position: %ld\n", search_char, (char *)result1 - str1);
    } else {
        printf("Character '%c' not found in the string.\n", search_char);
    }

    return (0);
}*/
