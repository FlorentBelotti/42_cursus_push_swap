/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:47 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/19 09:02:55 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ft_lst_interchanger(t_list **src, t_list **dest)
{
	t_list	*src_first_node;
	t_list	*src_second_node;

	if (!src || !*src)
		return ;
	src_first_node = *src;
	src_second_node = src_first_node->next;
	src_first_node->next = *dest;
	if (*dest)
		(*dest)->previous = src_first_node;
	*dest = src_first_node;
	*src = src_second_node;
	if (src_second_node)
		src_second_node->previous = NULL;
}
