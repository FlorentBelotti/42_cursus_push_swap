/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_stack_operations_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:47:45 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/07 17:03:46 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rrb (reverse rotate b) : Shifts all elements of the pile "lst_b" one position
down. The last element becomes the first. */

void	rrb(t_list **lst_b)
{
	t_list	*last_to_first;
	t_list	*second_last;

	if (!lst_b || !lst_b->next)
		return ;
	*last_to_first = ft_lstlast(lst_b);
	*second_last = ft_lstblast(lst_b);
	last_to_first->next = *lst_b;
	second_last->next = NULL;
	*lst_b = last_to_first;
}
