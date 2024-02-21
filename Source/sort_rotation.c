/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:33:28 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/18 14:53:48 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	choose_rotation_for_pile_b(t_data *data, int head_pos)
{
	int	list_size;
	int	head_steps;
	int	tail_steps;

	list_size = ft_lstsize(&data->lst_b);
	head_steps = head_pos;
	tail_steps = list_size - head_steps;
	if (head_steps == 2)
		sb(data);
	if (head_steps <= tail_steps)
		while (head_steps--)
			rb(data);
	else
		while (tail_steps--)
			rrb(data);
}

void	choose_rotation_for_pile_a(t_data *data, int head_pos, int tail_pos)
{
	int	list_size;
	int	head_steps;
	int	tail_steps;

	list_size = ft_lstsize(&data->lst_a);
	head_steps = head_pos;
	tail_steps = list_size - tail_pos;
	if (head_steps == 2)
		sa(data);
	if (head_steps <= tail_steps)
		while (head_steps--)
			ra(data);
	else
		while (tail_steps--)
			rra(data);
}
