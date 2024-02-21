/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_swapper_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:47:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/18 14:53:09 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* rrb (reverse rotate b) : Shifts all elements of the pile "lst_b" one position
down. The last element becomes the first. */

void	rrb(t_data *data)
{
	ft_lst_down(&(data->lst_b));
	write (1, "rrb\n", 4);
}
