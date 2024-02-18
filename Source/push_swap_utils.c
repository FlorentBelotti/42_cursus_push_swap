/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:48:22 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/18 14:53:33 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list **lst)
{
	int		i;
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
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
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

int	is_number(char **av, int i)
{
	int		j;

	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == ' ' || av[i][j] == '\t' || av[i][j] == '\n')
				j++;
			else if (av[i][j] == '-' &&
			(av[i][j + 1] >= '0' && av[i][j + 1] <= '9'))
				j++;
			else if (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}


int	is_smallest_node(t_list **pile, t_list *node_to_check)
{
	t_list	*current;

	if (!pile || !node_to_check)
		return (0);
	current = *pile;
	while (current)
	{
		if (current->index == -1 && current->content < node_to_check->content)
			return (0);
		current = current->next;
	}
	return (1);
}
