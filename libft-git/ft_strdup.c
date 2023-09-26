/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:08:50 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/26 12:06:48 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (dup != NULL)
	{
		ft_strlcpy(dup, s, len + 1);
	}
	return (dup);
}
