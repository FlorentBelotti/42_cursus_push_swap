/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_stack_operations_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:47:45 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/10 17:48:13 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rrb (reverse rotate b) : Shifts all elements of the pile "lst_b" one position
down. The last element becomes the first. */

void	rrb(t_data *data)
{
	ft_lst_down(&(data->lst_b));
	write (1, "rrb\n", 4);
}
