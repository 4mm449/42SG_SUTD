/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:52:44 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/26 12:12:16 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	t_len;
	char	*result;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	t_len = (ls1 + ls2) + 1;
	result = (char *)malloc(t_len);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, ls1 + 1);
	ft_strlcpy(result + ls1, s2, t_len);
	return (result);
}
