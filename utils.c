/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:48:22 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/07 16:27:59 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ft_lstsize : iterate on a list to find its size "i" */

int	ft_lstsize(t_list **lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* ft_lstlast : return the last node of the linked list. */

t_list	*ft_lstlast(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

/* ft_lstblast : for lst_before_last, return the second to last node of the
linked list. */

t_list	*ft_lstblast(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next->next != NULL)
		temp = temp->next;
	return (temp);
}
