/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_stack_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:35 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/07 17:19:48 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa (swap a) : Exchanges the first two nodes of the pile "lst_a" */
/*
void	swap(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	first = *lst_a;
	second = *lst_a->next;
	first->next = second->next;
	second->next = first;
	*lst_a = second;
}

void	sa(t_list **lst_a)
{
	swap(la)
	print("sa")
)
void	sb(t_list **lst_b)
{
	swap(lb)
	print("sb")
)
*/

/* sa (swap a) : Exchanges the first two nodes of the pile "lst_a" */

void	sa(t_list **lst_a)
{
	t_list	*first;
	t_list	*second;

	first = *lst_a;
	second = *lst_a->next;
	first->next = second->next;
	second->next = first;
	*lst_a = second;
}

/* sb (swap b ) : Exchanges the first two nodes of the pile "lst_b" */

void	sb(t_list **lst_b)
{
	t_list	*first;
	t_list	*second;

	first = *lst_b;
	second = *lst_b->next;
	first->next = second->next;
	second->next = first;
	*lst_b = second;

}

/* ra (rotate a) : Shifts all elements of the pile "lst_a" one position upwards.
The first element becomes the last. */

void	ra(t_list **lst_a)
{
	t_list	*first_to_last;
	t_list	*second_to_last;

	if (!lst_a || !lst_a->next)
		return ;
	*first_to_last = lst_a;
	*second_to_last = ft_lstlast(lst_a);
	lst_a = first_to_last->next;
	second_to_last->next = *first_to_last;
	*first_to_last->next = NULL;
}

/* rb (rotate b) : Shifts all elements of the pile "lst_b" one position upwards.
The first element becomes the last. */

void	rb(t_list **lst_b)
{
	t_list	*first_to_last;
	t_list	*second_to_last;

	if (!lst_b || !lst_b->next)
		return ;
	*first_to_last = lst_b;
	*second_to_last = ft_lstlast(lst_b);
	lst_b = first_to_last->next;
	second_to_last->next = *first_to_last;
	*first_to_last->next = NULL;
}

/* rra (reverse rotate a) : Shifts all elements of the pile "lst_a" one position
down. The last element becomes the first. */

void	rra(t_list **lst_a)
{
	t_list	*last_to_first;
	t_list	*second_last;

	if (!lst_a || !lst_a->next)
		return ;
	*last_to_first = ft_lstlast(lst_a);
	*second_last = ft_lstblast(lst_a);
	last_to_first->next = *lst_a;
	second_last->next = NULL;
	*lst_a = last_to_first;
}

