/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:48:28 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/11 02:42:15 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_number_of_partitions(t_data *data)
{
	int	additional_partitions;
	int	partition_nb;

	data->partition_base = 3;
	data->partition_factor = 100;
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

void	push_n_partition(t_data *data)
{
	int	index_max;

	define_index(&data->lst_a);
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
	int	head_pos;
	int	tail_pos;

	while (there_is_inferior_index(data, index_max))
	{
		if (data->lst_a->index <= index_max)
			pb(data);
		else
		{
			set_pile_order(&(data->lst_a));
			head_pos = head_inferior_index_pos(data, index_max);
			tail_pos = tail_inferior_index_pos(data, index_max);
			choose_rotation_for_pile_a(data, head_pos, tail_pos);
		}
	}
}
