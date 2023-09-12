/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:20:51 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/11 08:47:35 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i += 1;
	}
	return (s);
}
/*int main() 
{
    char myArray[5] = "Hello";
    char myArray1[5] = "Hello";
    size_t numBytes = sizeof(myArray);

    // Initialize the entire array with zeros
    memset(myArray + 2, '0', 2);
    ft_memset(myArray1 + 2, '0', 2);
    // printf("%li\n", numBytes);

    // Print the array
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", myArray[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", myArray1[i]);
    }

    return 0;
}*/
