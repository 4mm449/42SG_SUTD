/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:22:28 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/13 13:25:56 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	cpy_len;

	src_len = ft_strlen(src);
	if (src_len > 0)
	{
		if (size - 1 < src_len)
			cpy_len = size - 1;
		else
			cpy_len = src_len;
		ft_memcpy(dst, src, cpy_len);
		dst[cpy_len] = '\0';
	}
	return (src_len);
}

/*int main(void)
{
    char src[] = "Hello, World!";
    char dst1[20];
    char dst2[20];
    size_t copied_length_ft, copied_length_actual;

    // Copy using your ft_strlcpy
    copied_length_ft = ft_strlcpy(dst1, src, sizeof(dst1));

     Copy using the actual strlcpy
    copied_length_actual = strlcpy(dst2, src, sizeof(dst2));

    printf("Copied String (ft_strlcpy): %s\n", dst1);
    printf("Length of Copied String (ft_strlcpy): %zu\n", copied_length_ft);

    printf("Copied String (strlcpy): %s\n", dst2);
    printf("Length of Copied String (strlcpy): %zu\n", copied_length_actual);

    return 0;
}*/
