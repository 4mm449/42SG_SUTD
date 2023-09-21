/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:53:15 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/21 16:27:13 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	
}*/
#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

static char	**ft_free_on_failure(char **res, size_t i)
{
	while (i--)
		free(res[i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t				i;
	char const			*start;
	char				**res;

	i = 0;
	res = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s != c && *s)
				s++;
			res[i++] = ft_substr(start, 0, s - start);
			if (!res[i - 1])
				return (ft_free_on_failure(res, i));
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}
#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Include your library/header here

int main() {
    // Input string and delimiter
    char input[] = "Hello,World,This,is,a,test";
    char delimiter = ',';

    // Call ft_split to split the input string
    char **result = ft_split(input, delimiter);

    // Check if ft_split returned NULL (allocation failure)
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Iterate through the array and print each word
    int i = 0;
    while (result[i] != NULL) {
        printf("Word %d: %s\n", i, result[i]);
        i++;
    }

    // Free the memory allocated for the result array and its strings
    i = 0;
    while (result[i] != NULL) {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
