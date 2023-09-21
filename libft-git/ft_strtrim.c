/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:08:12 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/21 13:43:19 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	tr_len;
	char	*tr_str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
			start += 1;
	while (end > start && ft_strchr(set, s1[end]))
		end -= 1;
	tr_len = end - start + 1;
	tr_str = (char *)malloc(tr_len + 1);
	if (!tr_str)
		return (NULL);
	ft_strlcpy(tr_str, s1 + start, tr_len + 1);
	return (tr_str);
}

/*#include "libft.h"
#include <stdio.h>

int main() {
    // Test Case 1: Basic Test Cases
    char *str1 = "   Hello, World!   ";
    char *set1 = " ";
    char *trimmed1 = ft_strtrim(str1, set1);
    printf("Test Case 1: \"%s\" -> \"%s\"\n", str1, trimmed1);
    free(trimmed1);

    char *str2 = "ABCDEF";
    char *set2 = "XYZ";
    char *trimmed2 = ft_strtrim(str2, set2);
    printf("Test Case 2: \"%s\" -> \"%s\"\n", str2, trimmed2);
    free(trimmed2);

    // Test Case 3: Empty String
    char *str3 = "";
    char *set3 = " ";
    char *trimmed3 = ft_strtrim(str3, set3);
    printf("Test Case 3: \"%s\" -> \"%s\"\n", str3, trimmed3);
    free(trimmed3);

    // Test Case 4: No Trimming Required
    char *str4 = "Hello, World!";
    char *set4 = "XYZ";
    char *trimmed4 = ft_strtrim(str4, set4);
    printf("Test Case 4: \"%s\" -> \"%s\"\n", str4, trimmed4);
    free(trimmed4);

    // Test Case 5: All Characters to Trim
    char *str5 = "   ";
    char *set5 = " ";
    char *trimmed5 = ft_strtrim(str5, set5);
    printf("Test Case 5: \"%s\" -> \"%s\"\n", str5, trimmed5);
    free(trimmed5);

    return 0;
}*/
