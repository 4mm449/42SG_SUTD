/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:52:44 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/21 13:07:26 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	t_len;
	char	*result;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	t_len = (ls1 + ls2) + 1;
	result = (char *)malloc(t_len);
	if (!result)
		return (NULL);
       ft_strlcpy(result, s1, ls1 + 1);	
       ft_strlcpy(result + ls1, s2, t_len);
       return (result);       
}

/*#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test Case 1: Basic Test
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result1 = ft_strjoin(s1, s2);
    printf("Test Case 1: %s\n", result1);
    // Expected Output: "Hello, world!"

    // Test Case 2: Empty Strings
    char *empty1 = "";
    char *empty2 = "";
    char *result2 = ft_strjoin(empty1, empty2);
    printf("Test Case 2: %s\n", result2);
    // Expected Output: ""

    // Test Case 3: One Empty String
    char *text = "Some text";
    char *result3 = ft_strjoin(text, empty1);
    printf("Test Case 3: %s\n", result3);
    // Expected Output: "Some text"

    // Test Case 4: Null Strings
    char *null1 = NULL;
    char *null2 = NULL;
    char *result4 = ft_strjoin(null1, null2);
    printf("Test Case 4: %s\n", result4);
    // Expected Output: ""

    // Test Case 5: Large Strings
    char *large1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *large2 = "1234567890";
    char *result5 = ft_strjoin(large1, large2);
    printf("Test Case 5: %s\n", result5);
    // Expected Output: "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"

    // Test Case 6: Memory Allocation Failure
    // Simulate memory allocation failure by passing a large size
    char *large_size1 = "Hello, ";
    char *large_size2 = "world!";
    char *result6 = ft_strjoin(large_size1, large_size2);
    if (result6 == NULL)
        printf("Test Case 6: Memory Allocation Failed\n");
    else
        printf("Test Case 6: %s\n", result6);

    // Clean up allocated memory
    free(result1);
    free(result2);
    free(result3);
    free(result4);
    free(result5);

    return 0;
}*/
