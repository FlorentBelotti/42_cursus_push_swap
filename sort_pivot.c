/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:48:28 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/28 17:21:11 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*define_pivot(t_list **lst)
{
	t_list	*first;
	t_list	*mid;
	t_list	*last;
	int		piv;

	first = *lst;
	mid = find_mid_node(lst);
	last = ft_lstlast(lst);
	piv = median_of_three(first->content, mid->content, last->content)
	if (piv == first->content)
		return (first);
	if (piv == mid->content)
		return (mid);
	else
		return (last);
}

int	median_of_three(int a, int b, int c)
{
	if ((a - b) * (c - a) >= 0)
		return a;
	else if ((b - a) * (c - b) >= 0)
		return b;
	else
		return c;
}

t_list	*find_mid_node(t_list **lst)
{
	t_list	*slow;
	t_list	*fast;

	slow = *lst;
	fast = *lst;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return (slow);
}
