/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:48:22 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/27 16:03:57 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ft_lstsize : iterate on a list to find its size "i" */

int	ft_lstsize(t_list **lst)
{
	int	i;
	t_list	*current;

	i = 0;
	current = *lst;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}

/* ft_lstlast : return the last node of the linked list and update the previous
pointer to the second_to_last */

t_list	*ft_lstlast(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = *lst;
	while (temp->next)
	{
		temp->next->previous = temp;
		temp = temp->next;
	}
	return (temp);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while (str[i] == '+' || str[i] == ' ')
		i++;
	while (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + str[i] - '0';
		i++;
	}
	return (result * sign);
}
