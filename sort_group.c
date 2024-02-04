/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:48:28 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/02 16:35:52 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	define_index(t_data *data)
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
	return ;
}

int	calculate_number_of_partitions(t_data *data)
{
	int	additional_partitions;
	int	partition_nb;

	data->partition_base = 3;
	data->partition_factor = 25;
	data->list_size = ft_lstsize(&data->lst_a);
	if (data->list_size <= data->partition_factor)
		return (data->partition_base);
	else
	{
		additional_partitions = (data->list_size - data->partition_factor)
			/ data->partition_factor;
		if ((data->list_size - data->partition_factor)
			% data->partition_factor != 0)
			additional_partitions++;
	}
	partition_nb = data->partition_base + additional_partitions;
	return (partition_nb);
}

void	push_n_partition_in_pile_b(t_data *data)
{
	int	index_max;

	define_index(data);
	data->partition_nb = calculate_number_of_partitions(data);
	data->partition_nb_of_elements = data->list_size / data->partition_nb;
	index_max = data->partition_nb_of_elements;
	while (ft_lstsize(&data->lst_a) > 0)
	{
		push_inferior_index_into_pile_b(data, index_max);
		index_max += data->partition_nb_of_elements;
	}
}

void	push_inferior_index_into_pile_b(t_data *data, int index_max)
{
	int	inferior_index_pos;

	set_pile_a_order(data);
	while (there_is_inferior_index(data, index_max))
	{
		if (data->lst_a->index <= index_max)
		{
			pb(data);
			set_pile_a_order(data);
		}
		else
		{
			inferior_index_pos = first_inferior_index_pos(data, index_max);
			printf("%d\n", inferior_index_pos);
			choose_and_do_the_rotation(data, inferior_index_pos);
		}
	}
}

void	choose_and_do_the_rotation(t_data *data, int inferior_index_pos)
{
	int	mid_list_size;

	printf("choose_and_do_the_rotation");
	data->list_size = ft_lstsize(&data->lst_a);
	mid_list_size = data->list_size / 2;
	if (inferior_index_pos <= mid_list_size)
	{
		while (inferior_index_pos > 0)
		{
			ra(data);
			inferior_index_pos--;
		}
	}
	if (inferior_index_pos > mid_list_size)
	{
		while (inferior_index_pos < data->list_size)
		{
			rra(data);
			inferior_index_pos++;
		}
	}
}

int	first_inferior_index_pos(t_data *data, int index_max)
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
