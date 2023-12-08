/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:47 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/08 11:30:52 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* handle_stack.c : Contains functions called for stack manipulation. */

	/* ft_swap : exchange position of the first two nodes. */

void	ft_swap_lst(t_data *data)
{
	t_list	*first;
	t_list	*second;

	first = data->lst_a;
	second = data->lst_a->next;
	data->lst_a = second;
	first->next = second->next;
	second->next = first;
}

	/* ft_lst_upwards : the first node become the last node. */

void	ft_lst_upward(t_data *data)
{
	t_list	*first_to_last;
	t_list	*second_to_last;

	if (!data->lst_a || !data->lst_a->next)
		return ;
	first_to_last = data->lst_a;
	second_to_last = ft_lstlast(data->lst_a);
	data->lst_a = first_to_last->next;
	second_to_last->next = first_to_last;
	first_to_last->next = NULL;
}

	/* ft_lst_downwards : the last node become the first node. */

void	ft_lst_down(t_data *data)
{
	t_list	*last_to_first;
	t_list	*second_to_last;

	if (!data->lst_a || !data->lst_a->next)
		return ;
	last_to_first = ft_lstlast(data->lst_a);
	second_to_last = last_to_first->previous;
	second_to_last->next = NULL;
	last_to_first->next = data->lst_a;
	last_to_first->previous = NULL;
	data->lst_a = last_to_first;
}
