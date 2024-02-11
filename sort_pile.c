/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:57:23 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/12 00:41:55 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_pile_order(t_list	**pile)
{
	int		nb;
	t_list	*cur;

	nb = 0;
	cur = *pile;
	while (cur)
	{
		cur->order = nb;
		nb = nb + 1;
		cur = cur->next;
	}
}

int	biggest_index_position_in_partition(t_data *data)
{
	t_list	*cur;
	int		biggest_pos;
	int		biggest_index;

	set_pile_order(&(data->lst_b));
	cur = data->lst_b;
	data->end = data->partition_nb_of_elements;
	biggest_index = cur->content;
	biggest_pos = 1;
	while (cur && cur->order <= data->end && cur->order >= data->start)
	{
		if (cur->content > biggest_index)
		{
			biggest_index = cur->content;
			biggest_pos = cur->order;
		}
		cur = cur->next;
	}
	return (biggest_pos);
}
