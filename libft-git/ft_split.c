/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:53:15 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/26 12:14:51 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	word_counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count += 1;
			while (s[i] && (s[i] != c))
				i += 1;
		}
		else
			i += 1;
	}
	return (count);
}

static char	**fail_free(char **result, size_t i)
{
	while (i)
	{
		i -= 1;
		free(result[i]);
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char const	*start;
	char		**result;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!s || !result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && (*s != c))
				s += 1;
			result[i] = (char *)malloc(sizeof(char) * (s - start + 1));
			if (!result[i])
				return (fail_free(result, i));
			ft_strlcpy(result[i], start, s - start + 1);
			i += 1;
		}
		else
			s += 1;
	}
	result[i] = NULL;
	return (result);
}
