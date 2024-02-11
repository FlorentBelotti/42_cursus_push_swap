/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:08:48 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/11 02:41:34 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	define_index(t_list **pile)
{
	int		index;
	int		found;
	t_list	*current;

	index = 1;
	while (index <= ft_lstsize(pile))
	{
		current = *pile;
		found = 0;
		while (current && !found)
		{
			if (current->index == -1 && is_smallest_node(pile, current))
			{
				current->index = index;
				found = 1;
			}
			else
				current = current->next;
		}
		index++;
	}
	return ;
}

int	head_inferior_index_pos(t_data *data, int index_max)
{
	t_list	*current;

	current = data->lst_a;
	while (current)
	{
		if (current->index <= index_max)
			return (current->order);
		current = current->next;
	}
	return (0);
}

int	tail_inferior_index_pos(t_data *data, int index_max)
{
	t_list	*current;

	current = ft_lstlast(&data->lst_a);
	while (current)
	{
		if (current->index <= index_max)
			return (current->order);
		current = current->previous;
	}
	return (0);
}

int	there_is_inferior_index(t_data *data, int index_max)
{
	t_list	*current;

	current = data->lst_a;
	while (current)
	{
		if (current->index <= index_max)
			return (1);
		current = current->next;
	}
	return (0);
}
