/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:22:02 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/19 15:30:28 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	//if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	if (ft_isdigit(c) > 0 || ft_isalpha(c) > 0)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d", ft_isalnum('9'));
}*/
