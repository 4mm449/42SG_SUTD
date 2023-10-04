/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:41:53 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/25 20:02:32 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		i += 1;
	}
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
		return (0);
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

/*int	main() 
{
    const char *str1 = "Hello, World! This is aibn-muh";
    const char *str2 = "Hello, World";
    int result = ft_strncmp(str1, str2, 15);
    int result1 = strncmp(str1, str2, 15);

    printf("ft_strncmp> %d\n", result);
    printf("strncmp> %d", result1);

    return (0);
}*/
