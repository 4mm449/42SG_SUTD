/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:23:02 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/28 12:43:13 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c;
	t_list	*next;

	if (!lst)
		return ;
	c = *lst;
	while (c)
	{
		next = c->next;
		del(c->content);
		free(c);
		c = next;
	}
	*lst = NULL;
}
