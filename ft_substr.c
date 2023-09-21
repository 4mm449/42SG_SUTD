/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:07:42 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/21 11:52:15 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return(ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
	       len = ft_strlen(s + start);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);	
}

/*int main() {
    // Test Case 1: Basic Test Case
    const char *str1 = "Hello, World!";
    char *substring1 = ft_substr(str1, 7, 5);
    printf("Test Case 1: %s\n", substring1); // Expected Output: "World"
    free(substring1);

    // Test Case 2: Extracting Entire String
    const char *str2 = "This is a test";
    char *substring2 = ft_substr(str2, 0, 14);
    printf("Test Case 2: %s\n", substring2); // Expected Output: "This is a test"
    free(substring2);

    // Test Case 3: Start Index Beyond String Length
    const char *str3 = "abcdef";
    char *substring3 = ft_substr(str3, 10, 3);
    printf("Test Case 3: %s\n", substring3); // Expected Output: ""
    free(substring3);

    // Test Case 4: Empty String
    const char *str4 = "";
    char *substring4 = ft_substr(str4, 0, 5);
    printf("Test Case 4: %s\n", substring4); // Expected Output: ""
    free(substring4);

    // Test Case 5: Extracting a Single Character
    const char *str5 = "12345";
    char *substring5 = ft_substr(str5, 2, 1);
    printf("Test Case 5: %s\n", substring5); // Expected Output: "3"
    free(substring5);

    return 0;
}*/
