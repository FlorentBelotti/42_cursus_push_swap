/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:18:13 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/11 16:32:14 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_limit(t_data *data)
{
	t_list	*current;

	current = data->lst_a;
	while (current)
	{
		if (current->content > 2147483647 || current->content < -2147483647)
			return (0);
		current = current->next;
	}
	return (1);
}

int	check_double(t_data *data)
{
	t_list	*current;
	t_list	*checker;

	current = data->lst_a;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->content == checker->content)
				return (0);
			checker = checker->next;
		}
		current = current->next;
	}
	return (1);
}
