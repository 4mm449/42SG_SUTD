/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:37:28 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/20 12:45:47 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		s += 1;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (NULL);
}

/*int main() 
{
    const char *str = "Hello, World!";
    const char *str1 = "Hello, World!";
    char search_char = 'l';
    char *result = ft_strchr(str, search_char);
    char *result1 = strchr(str1, search_char);

    if (result != NULL)
    {
        printf("(ft_strcchr)> Character '%c' found at position: %s\n", search_char, result - str);
        printf("(strcchr)> Character '%c' found at position: %ld\n", search_char, result1 - str1);
    } 
    else 
    {
        printf("(ft_strchr)> Character '%c' not found in the string.\n", search_char);
        printf("(strchr)> Character '%c' not found in the string.\n", search_char);
    }

    return (0);
}*/
