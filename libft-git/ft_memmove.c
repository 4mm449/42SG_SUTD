/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:47:29 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/13 12:51:38 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t 		i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s < d)
	{
		i = n - 1;
		while (i)
		{
			d[i] = s[i];
			i -= 1;
		}
	}
	else
	{
		i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i += 1;
		}
	}
	return (dest);
}

/*int	main() 
{
    char str[] = "Ammaar";
    char str1[] = "Transform";
    char str2[] = "Ammaar";
    char str3[] = "Transform";

    // Overlapping copy within the same string
    ft_memmove(str1, str1 + 2, 4);
    memmove(str1, str1 + 2, 4);

    // Print the modified string
    printf("Modified string: %s\n", str1);
    printf("Modified string: %s\n", str1);

    return 0;
}*/
