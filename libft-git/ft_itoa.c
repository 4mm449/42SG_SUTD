/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <aibn-muh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:26:21 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/23 19:26:23 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  c_digits(int n)
{
    int count;

    count = 0;
    if(n == 0)
        return (1);
    if(n < 0)
    {
        count += 1;
        n = -n;
    }
    while (n > 0)
    {
        count += 1;
        n /= 10;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    int    i;
    int    digits;
    int    sign;
    char    *result;

    digits = c_digits(n);
    i = digits - 1;
    sign = 0;
    if (n < 0)
    {
        sign = 1;
        n = -n;
    }
    result = (char *)malloc(sizeof(char) * (digits + 1));
    if (result == NULL)
        return (NULL);
    if(sign)
        result[0] = '-';
    do
    {
        result[i] = (n % 10) + '0';
        n /= 10;
        i -= 1;
    } while (n > 0);
    result[digits] = '\0';
    return (result);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Include your ft_itoa function header here

int main() {
    int num1 = 12345;
    int num2 = -54321;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("Integer: %d, String: %s\n", num1, str1);
    printf("Integer: %d, String: %s\n", num2, str2);
    printf("Integer: %d, String: %s\n", num3, str3);

    // Free the allocated memory
    free(str1);
    free(str2);
    free(str3);

    return 0;
}*/
