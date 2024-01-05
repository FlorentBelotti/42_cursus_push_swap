/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:48:28 by fbelotti          #+#    #+#             */
/*   Updated: 2024/01/05 17:14:38 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_smallest_node(t_data *data, t_list *node_to_check)
{
	t_list	*current;

	if (!data->lst_a || !node_to_check)
		return (0);
	current = data->lst_a;
	while (current)
	{
		if (current->index == -1 && current->content < node_to_check->content)
			return (0);
		current = current->next;
	}
	return (1);
}

int	define_index(t_data *data)
{
	int		index;
	int		found;
	t_list	*current;

	index = 1;
	while (index <= ft_lstsize(&(data->lst_a)))
	{
		current = data->lst_a;
		found = 0;
		while (current && !found)
		{
			if (current->index == -1 && is_smallest_node(data, current))
			{
				current->index = index;
				found = 1;
			}
			else
				current = current->next;
		}
		index++;
	}
	return (index);
}

void	divide_pile_into_four(t_data *data)
{
	int	total_index;
	int	quarter_size;

	total_index = define_index(data);
	quarter_size = total_index / 4;
	data->quarter_1 = 1;
	data->quarter_2 = quarter_size + 1;
	data->quarter_3 = 2 * quarter_size + 1;
	data->quarter_4 = 3 * quarter_size + 1;
	printf("[quarter_1: %d]\n[quarter_2: %d]\n[quarter_3: %d]\n[quarter_4: %d]\n", data->quarter_1, data->quarter_2, data->quarter_3, data->quarter_4);
}

