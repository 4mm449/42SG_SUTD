/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:27:49 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/20 10:49:04 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memsize;
	void	*ptr;

	memsize = nmemb * size;
	ptr = malloc(memsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, memsize);
	return (ptr);
}

/*int main() 
{
    // Test Case 1: Basic Test Case
    int *arr1 = (int *)ft_calloc(5, sizeof(int));
    int *arr2 = (int *)calloc(5, sizeof(int));

    // Verify that both arrays are initialized to zero
    int test_case_1_passed = (memcmp(arr1, arr2, 5 * sizeof(int)) == 0);

    free(arr1);
    free(arr2);

    // Test Case 2: Large Allocation
    char *str1 = (char *)ft_calloc(1000000, sizeof(char));
    char *str2 = (char *)calloc(1000000, sizeof(char));

    // Verify that both strings are initialized to zero
    int test_case_2_passed = (memcmp(str1, str2, 1000000 * sizeof(char)) == 0);

    free(str1);
    free(str2);

    // Test Case 3: Zero Elements
    int *empty1 = (int *)ft_calloc(0, sizeof(int));
    int *empty2 = (int *)calloc(0, sizeof(int));

    // Verify that both empty arrays are correctly allocated (should not be NULL)
    int test_case_3_passed = (empty1 != NULL && empty2 != NULL);

    free(empty1);
    free(empty2);

    // Print test results
    if (test_case_1_passed) {
        printf("Test Case 1 Passed: Basic Test Case\n");
    } else {
        printf("Test Case 1 Failed: Basic Test Case\n");
    }

    if (test_case_2_passed) {
        printf("Test Case 2 Passed: Large Allocation\n");
    } else {
        printf("Test Case 2 Failed: Large Allocation\n");
    }

    if (test_case_3_passed) {
        printf("Test Case 3 Passed: Zero Elements\n");
    } else {
        printf("Test Case 3 Failed: Zero Elements\n");
    }

    return 0;
}*/
