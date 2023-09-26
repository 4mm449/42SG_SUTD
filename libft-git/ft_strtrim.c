/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:08:12 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/26 12:13:10 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	tr_len;
	char	*tr_str;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start += 1;
	while (end > start && ft_strchr(set, s1[end]))
		end -= 1;
	tr_len = end - start + 1;
	tr_str = (char *)malloc(tr_len + 1);
	if (!tr_str)
		return (NULL);
	ft_strlcpy(tr_str, s1 + start, tr_len + 1);
	return (tr_str);
}
