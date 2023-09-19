/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:19:09 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/19 15:08:01 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && len > 0)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && i + j < len)
		{
			j += 1;
		}
		if (little[j] == '\0')
		{
			return (char *)(big + i);
		}
		i += 1;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    // Test Case 1: Basic Test Cases
    const char *big1 = "This is a test string for strnstr function.";
    const char *little1 = "test";
    char *result1 = ft_strnstr(big1, little1, 100);
    char *result2 = strnstr(big1, little1, 100);

    printf("Test Case 1 (ft_strnstr): %s\n", result1);
    printf("Test Case 1 (strnstr): %s\n", result2);

    if (result1 != NULL && result2 != NULL && strcmp(result1, result2) == 0) {
        printf("Test Case 1 Passed\n");
    } else {
        printf("Test Case 1 Failed\n");
    }

    const char *noSubstring = "NoSubstringHere";
    char *result3 = ft_strnstr(noSubstring, little1, 100);
    char *result4 = strnstr(noSubstring, little1, 100);

    printf("Test Case 2 (ft_strnstr): %s\n", result3);
    printf("Test Case 2 (strnstr): %s\n", result4);

    if (result3 == NULL && result4 == NULL) {
        printf("Test Case 2 Passed\n");
    } else {
        printf("Test Case 2 Failed\n");
    }

    const char *emptySubstring = "";
    char *result5 = ft_strnstr(big1, emptySubstring, 100);
    char *result6 = strnstr(big1, emptySubstring, 100);

    printf("Test Case 3 (ft_strnstr): %s\n", result5);
    printf("Test Case 3 (strnstr): %s\n", result6);

    if (result5 != NULL && result6 != NULL && strcmp(result5, result6) == 0) {
        printf("Test Case 3 Passed\n");
    } else {
        printf("Test Case 3 Failed\n");
    }

    // Test Case 4: Test Cases with Specified Length
    const char *big2 = "This is a test string for strnstr function.";
    const char *little2 = "test";
    char *result7 = ft_strnstr(big2, little2, 10);
    char *result8 = strnstr(big2, little2, 10);

    printf("Test Case 4 (ft_strnstr): %s\n", result7);
    printf("Test Case 4 (strnstr): %s\n", result8);

    if (result7 != NULL && result8 != NULL && strcmp(result7, result8) == 0) {
        printf("Test Case 4 Passed\n");
    } else {
        printf("Test Case 4 Failed\n");
    }

    const char *noSubstring2 = "NoSubstringHere";
    char *result9 = ft_strnstr(noSubstring2, little2, 5);
    char *result10 = strnstr(noSubstring2, little2, 5);

    printf("Test Case 5 (ft_strnstr): %s\n", result9);
    printf("Test Case 5 (strnstr): %s\n", result10);

    if (result9 == NULL && result10 == NULL) {
        printf("Test Case 5 Passed\n");
    } else {
        printf("Test Case 5 Failed\n");
    }

    // Test Case 6: Performance Test Case
    const char *big3 = "A very large string ..."; // Large string
    const char *little3 = "substring"; // Substring to search

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    char *result11 = ft_strnstr(big3, little3, 1000000); // Large maximum length
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Test Case 6: Execution Time (ft_strnstr): %f seconds\n", cpu_time_used);
    printf("Test Case 6 (ft_strnstr): %s\n", result11);

    start = clock();
    char *result12 = strnstr(big3, little3, 1000000); // Large maximum length
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Test Case 6: Execution Time (strnstr): %f seconds\n", cpu_time_used);
    printf("Test Case 6 (strnstr): %s\n", result12);

    if (result11 != NULL && result12 != NULL && strcmp(result11, result12) == 0) {
        printf("Test Case 6 Passed\n");
    } else {
        printf("Test Case 6 Failed\n");
    }

    return 0;
}*/
