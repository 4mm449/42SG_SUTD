/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:50:23 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/21 15:50:12 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	t_len;
	size_t	cpy_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	t_len = src_len + dst_len;
	cpy_len = size - dst_len - 1;
	if (size <= dst_len)
		return (t_len + size);
	if (cpy_len > src_len)
		cpy_len = src_len;
	ft_memcpy(dst + dst_len, src, cpy_len);
	dst[dst_len + cpy_len] = '\0';
	return (t_len);
}

/*#include <stdio.h>

int main() {
    char dest[20] = "Hello, ";
    const char* src = "World!";
    size_t total_length = ft_strlcat(dest, src, 5);

    printf("Concatenated string: %s\n", dest);
    printf("Total length of the concatenated string: %zu\n", total_length);

    return 0;
}*/
