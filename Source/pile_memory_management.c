/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_memory_management.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:12:15 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/23 16:00:49 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

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

void	create_stack(t_list **stack_a, int val)
{
	t_list	*new_node;
	t_list	*current;

	new_node = malloc (sizeof(t_list));
	if (!new_node)
		return ;
	new_node->content = val;
	new_node->index = -1;
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

void	val_to_stack(int i, char **av, t_list **lst_a, t_data *data)
{
	int		val;

	while (av[i])
	{
		val = ft_atoi(av[i]);
		if (val == 0 && ft_strcmp("0", av[i]))
		{
			write (2, "Error : out of bound\n", 22);
			if (data->split_flag == 1)
				free_array(av);
			exit (0);
		}
		create_stack(lst_a, val);
		i++;
	}
}

void	set_base_value(t_data *data)
{
	data->index = 1;
	data->lst_a = NULL;
	data->lst_b = NULL;
	data->split_flag = 0;
}
