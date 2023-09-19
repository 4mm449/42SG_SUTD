/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:34:27 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/19 15:19:05 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_atoi(char *str)
{
	int	nv_t;
	int	index;
	int	result;

	index = 0;
	nv_t = 0;
	result = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index += 1;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			nv_t += 1;
		index += 1;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index += 1;
	}
	if (nv_t % 2 != 0)
		result = -result;
	return (result);
}

/*int	main(void)
{
	char string[100] = "  ---+--+1234ab567";
	printf("%d", ft_atoi(string));
}
int main() {
    // Test Case 1: Basic Test Cases
    char str1[] = "12345";
    int result1 = ft_atoi(str1);
    int expected1 = atoi(str1);
    printf("Test Case 1 (ft_atoi): %d, Expected: %d\n", result1, expected1);

    // Test Case 2: Negative Number
    char str2[] = "-6789";
    int result2 = ft_atoi(str2);
    int expected2 = atoi(str2);
    printf("Test Case 2 (ft_atoi): %d, Expected: %d\n", result2, expected2);

    // Test Case 3: Leading Whitespaces
    char str3[] = "    9876";
    int result3 = ft_atoi(str3);
    int expected3 = atoi(str3);
    printf("Test Case 3 (ft_atoi): %d, Expected: %d\n", result3, expected3);

    // Test Case 4: Leading Whitespaces and Sign
    char str4[] = "   -543";
    int result4 = ft_atoi(str4);
    int expected4 = atoi(str4);
    printf("Test Case 4 (ft_atoi): %d, Expected: %d\n", result4, expected4);

    // Test Case 5: Overflow
    char str5[] = "2147483648"; // Beyond INT_MAX
    int result5 = ft_atoi(str5);
    int expected5 = atoi(str5);
    printf("Test Case 5 (ft_atoi): %d, Expected: %d\n", result5, expected5);

    // Test Case 6: Overflow with Negative Sign
    char str6[] = "-2147483649"; // Below INT_MIN
    int result6 = ft_atoi(str6);
    int expected6 = atoi(str6);
    printf("Test Case 6 (ft_atoi): %d, Expected: %d\n", result6, expected6);

    // Test Case 7: Non-Numeric Characters After Digits
    char str7[] = "123abc";
    int result7 = ft_atoi(str7);
    int expected7 = atoi(str7);
    printf("Test Case 7 (ft_atoi): %d, Expected: %d\n", result7, expected7);

    return 0;
}*/
