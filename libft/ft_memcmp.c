/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:20:37 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/19 12:13:48 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i += 1;
	}
	return (0);
}

/*int main() 
{
    // Test Case 1: Equal strings
    char str1[] = "apple";
    char str2[] = "apple";
    int result1 = memcmp(str1, str2, 5);
    int result2 = ft_memcmp(str1, str2, 5);
    printf("Test Case 1: memcmp=%d, ft_memcmp=%d\n", result1, result2);

    // Test Case 2: Different characters, memcmp should return -1
    char str3[] = "apple";
    char str4[] = "banana";
    int result3 = memcmp(str3, str4, 5);
    int result4 = ft_memcmp(str3, str4, 5);
    printf("Test Case 2: memcmp=%d, ft_memcmp=%d\n", result3, result4);

    // Test Case 3: Different characters, memcmp should return 1
    char str5[] = "banana";
    char str6[] = "apple";
    int result5 = memcmp(str5, str6, 5);
    int result6 = ft_memcmp(str5, str6, 5);
    printf("Test Case 3: memcmp=%d, ft_memcmp=%d\n", result5, result6);

    // Test Case 4: Null-terminated strings
    char str7[] = "apple";
    char str8[] = "applesauce";
    int result7 = memcmp(str7, str8, 5);
    int result8 = ft_memcmp(str7, str8, 5);
    printf("Test Case 4: memcmp=%d, ft_memcmp=%d\n", result7, result8);

    // Test Case 5: Binary data
    unsigned char data1[] = {0x01, 0x02, 0x03, 0x04};
    unsigned char data2[] = {0x01, 0x02, 0x03, 0x05};
    int result9 = memcmp(data1, data2, 4);
    int result10 = ft_memcmp(data1, data2, 4);
    printf("Test Case 5: memcmp=%d, ft_memcmp=%d\n", result9, result10);

    // Test Case 6: Comparing only part of a string
    char str9[] = "abcdefgh";
    char str10[] = "abxyzefgh";
    int result11 = memcmp(str9, str10, 6);
    int result12 = ft_memcmp(str9, str10, 6);
    printf("Test Case 6: memcmp=%d, ft_memcmp=%d\n", result11, result12);

    return 0;
}*/
