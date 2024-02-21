/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:36:08 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/19 11:07:30 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	biggest_content(t_list **lst, int size)
{
	t_list	*temp;
	int		max;
	int		max_index;
	int		index;

	max = (*lst)->content;
	temp = *lst;
	index = 1;
	max_index = 1;
	while (temp && index <= size)
	{
		if (temp->content > max)
		{
			max = temp->content;
			max_index = index;
		}
		temp = temp->next;
		index++;
	}
	return (max_index);
}

void	tiny_sort(t_data *data)
{
	if (ft_lstsize(&data->lst_a) == 2)
	{
		if (biggest_content(&data->lst_a, 2) == 1)
			sa(data);
	}
	if (ft_lstsize(&data->lst_a) == 3)
	{
		if (biggest_content(&data->lst_a, 3) == 1)
		{
			ra(data);
			if (biggest_content(&data->lst_a, 2) == 1)
				sa(data);
		}
		if (biggest_content(&data->lst_a, 3) == 2)
		{
			rra(data);
			if (biggest_content(&data->lst_a, 2) == 1)
				sa(data);
		}
		if (biggest_content(&data->lst_a, 3) == 3)
		{
			if (biggest_content(&data->lst_a, 2) == 1)
				sa(data);
		}
	}
}

void	sort_five_numbers(t_data *data)
{
	t_list	*current;

	while (ft_lstsize(&data->lst_a) > 3)
	{
		current = data->lst_a;
		if (is_smallest_node(&data->lst_a, current))
			pb(data);
		ra(data);
	}
	tiny_sort(data);
	current = data->lst_b;
	if (is_smallest_node(&data->lst_b, current))
		rb(data);
	while (ft_lstsize(&data->lst_b) > 0)
		pa(data);
}
