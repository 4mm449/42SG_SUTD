/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:25:01 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/26 12:05:43 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*result;
	unsigned char		target;

	result = s;
	target = (unsigned char)c;
	while (n)
	{
		n -= 1;
		if (*result == target)
			return ((void *)result);
		result += 1;
	}
	return (NULL);
}
