/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:45:39 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/29 10:55:56 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_node;
	void	*set;

	n_lst = NULL;
	n_node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		set = f(lst->content);
		n_node = ft_lstnew(set);
		if (!n_node)
		{
			del(set);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_node);
		lst = lst -> next;
	}
	return (n_lst);
}
