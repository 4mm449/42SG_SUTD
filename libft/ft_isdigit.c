/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:14:32 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/07 09:59:16 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (c >= '0' && c <= '9');
	}
	else
	{
		return (0);
	}
}
/*int	main(void)
{
	printf("%i\n", isdigit(57));
	printf("%s\n", isdigit('a')?"true":"false");
	printf("%s\n", ft_isdigit('a')?"true":"false");	
	printf("%i\n", ft_isdigit(57));	
}*/
