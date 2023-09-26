/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:57:05 by aibn-muh          #+#    #+#             */
/*   Updated: 2023/09/26 14:22:18 by aibn-muh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // You should adjust this if your header file is in a different location

int main() {
    // Create a new node with content "Hello, World!"
    t_list *node = ft_lstnew("Hello, World!");

    // Check if the node was created successfully
    if (node != NULL) {
        printf("Node created successfully.\n");
        printf("Content: %s\n", (char *)node->content); // Cast to char* since content is a void pointer
        printf("Next: %p\n", (void *)node->next); // Print the next pointer as a pointer value
    } else {
        printf("Node creation failed due to a memory allocation error.\n");
    }

