/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_memory_management.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:12:15 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/22 19:13:34 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

	/* create_node : function used to create the nodes of a list. */

t_list	*create_node(int val)
{
	t_list	*new_node;

	new_node = malloc (sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->content = val;
	new_node->next = NULL;
	new_node->previous = NULL;
	return (new_node);
}

	/* create_stack */

void create_stack(t_list **stack_a, int val)
{
	t_list	*new_node;
	t_list	*current;

	new_node = malloc (sizeof(t_list));
	if (!new_node)
		return ;
	new_node->content = val;
	new_node->next = NULL;
	new_node->previous = NULL;
	if (*stack_a == NULL)
		*stack_a = new_node;
	else
	{
		current = *stack_a;
		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->previous = current;
	}
}

	/* free_list : function used to free the nodes of a list. */

void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free (current);
		current = next;
	}
	return ;
}
