/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:30:59 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/11 08:47:09 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i += 1;
	}
}

/*int main() {
    char myString[5] = "Hello";
    char myString1[5] = "Hello";

    // Initialize the entire array to zero using custom_bzero
    bzero(myString, sizeof(myString));
    ft_bzero(myString1, sizeof(myString1));

    // Print the array to verify it has been zeroed out
    printf("myString1 after bzero: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myString[i]);
    }
    printf("\n");

    printf("myString1 after ft_bzero: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myString1[i]);
    }
    printf("\n");

    return 0;
}*/
