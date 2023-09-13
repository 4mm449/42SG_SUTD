/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:40:13 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/13 14:49:52 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	i = len_s - 1;
	while (i < len_s)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		if (i == 0)
			return ((char *)&s[i]);
		i -= 1;
	}
	return (NULL);
}

/*int main()
{
    const char *str = "Hello, World!";
    const char *str1 = "Hello, World!";
    char search_char = 0;
    char *result = ft_strrchr(str, search_char);
    char *result1 = strrchr(str1, search_char);

    if (result != NULL)
    {
        printf("(ft_strrchr)> Character '%c' found at position: %ld\n", search_char, result - str);
        printf("(strrchr)> Character '%c' found at position: %ld\n", search_char, result1 - str1);
    }
    else
    {
        printf("(ft_strrchr)> Character '%c' not found in the string.\n", search_char);
        printf("(strrchr)> Character '%c' not found in the string.\n", search_char);
    }

    return (0);
}*/
