/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:08:50 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/20 11:52:43 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (dup != NULL)
	{
		ft_strlcpy(dup, s, len + 1);
	}
	return dup;
}

/*int main() {
    // Test Case 1: Basic Test Case
    const char *original1 = "Hello, world!";
    char *duplicate1 = ft_strdup(original1);
    char *duplicate2 = strdup(original1);

    int test_case_1_passed = (strcmp(duplicate1, duplicate2) == 0);

    free(duplicate1);
    free(duplicate2);

    // Test Case 2: Empty String
    const char *original2 = "";
    char *duplicate3 = ft_strdup(original2);
    char *duplicate4 = strdup(original2);

    int test_case_2_passed = (strcmp(duplicate3, duplicate4) == 0);

    free(duplicate3);
    free(duplicate4);

    // Test Case 3: Large String
    const char *original3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char *duplicate5 = ft_strdup(original3);
    char *duplicate6 = strdup(original3);

    int test_case_3_passed = (strcmp(duplicate5, duplicate6) == 0);

    free(duplicate5);
    free(duplicate6);

    // Print test results
    if (test_case_1_passed) {
        printf("Test Case 1 Passed: Basic Test Case\n");
    } else {
        printf("Test Case 1 Failed: Basic Test Case\n");
    }

    if (test_case_2_passed) {
        printf("Test Case 2 Passed: Empty String\n");
    } else {
        printf("Test Case 2 Failed: Empty String\n");
    }

    if (test_case_3_passed) {
        printf("Test Case 3 Passed: Large String\n");
    } else {
        printf("Test Case 3 Failed: Large String\n");
    }

    return 0;
}*/
