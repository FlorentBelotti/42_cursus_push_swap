/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:47 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/10 18:24:45 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* handle_stack.c : Contains functions called for stack manipulation. */

	/* ft_swap : exchange position of the first two nodes. */

void	ft_swap_lst(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	first = *lst;
	second = (*lst)->next;
	*lst = second;
	first->next = second->next;
	second->next = first;
}

	/* ft_lst_upwards : the first node become the last node. */

void	ft_lst_upward(t_list **lst)
{
	t_list	*first_to_last;
	t_list	*second_to_last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	first_to_last = *lst;
	second_to_last = ft_lstlast(lst);
	*lst = first_to_last->next;
	second_to_last->next = first_to_last;
	first_to_last->next = NULL;
}

	/* ft_lst_downwards : the last node become the first node. */

void	ft_lst_down(t_list **lst)
{
	t_list	*last_to_first;
	t_list	*second_to_last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	last_to_first = ft_lstlast(lst);
	second_to_last = last_to_first->previous;
	if (second_to_last != NULL)
	{
		second_to_last->next = NULL;
		last_to_first->next = *lst;
		last_to_first->previous = NULL;
		*lst = last_to_first;
	}
}

	/* ft_lst_add : function used to create lst_a. */

void	*ft_lst_add(t_list **lst_a, int val)
{
	t_list	*node;

	node = (t_list *) malloc (sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = (void *)val;
	node->next = *lst_a;
	node->previous = NULL;
	if (lst_a != NULL)
		(*lst_a)->previous = node;
	*lst_a = node;
	return (lst_a);
}
