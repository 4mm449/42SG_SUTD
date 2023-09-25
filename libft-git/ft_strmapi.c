/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:21:00 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/25 12:34:45 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i += 1;
	}
	result[i] = '\0';
	return (result);
}
/*#include <stdio.h>
#include "libft.h"

// A sample mapping function that converts characters to uppercase
char my_mapping_function(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A'); // Convert to uppercase
    return c; // Leave other characters unchanged
}

int main()
{
    const char *input = "Hello, world!";
    char *result;

    // Test the ft_strmapi function with the mapping function
    result = ft_strmapi(input, my_mapping_function);

    if (result)
    {
        printf("Original string: %s\n", input);
        printf("Mapped string:   %s\n", result);

        // Remember to free the allocated memory
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
