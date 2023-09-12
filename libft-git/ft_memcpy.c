/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:48:34 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/11 09:59:52 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i += 1;
	}
	return (dest);
}

/*int main() {
    char source[] = "Hello, World!";
    char destination[20];
    char dest[20];

    // Copy the contents of 'source' to 'destination'
    memcpy(destination, source, strlen(source) + 1);
    ft_memcpy(dest, source, strlen(source) + 1);

    // Print the 'destination' string
    printf("Copied string: %s\n", destination);
    printf("Copied string: %s\n", dest);

    return 0;
}*/
