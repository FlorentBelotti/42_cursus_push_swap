/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_swapper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:35 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/18 14:53:13 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* sa (swap a) : Exchanges the first two nodes of the pile "lst_a" */

void	sa(t_data *data)
{
	ft_swap_lst(&(data->lst_a));
	write (1, "sa\n", 3);
}

/* sb (swap b ) : Exchanges the first two nodes of the pile "lst_b" */

void	sb(t_data *data)
{
	ft_swap_lst(&(data->lst_b));
	write (1, "sb\n", 3);
}

/* ra (rotate a) : Shifts all elements of the pile "lst_a" one position upwards.
The first element becomes the last. */

void	ra(t_data *data)
{
	ft_lst_upward(&(data->lst_a));
	write (1, "ra\n", 3);
}

/* rb (rotate b) : Shifts all elements of the pile "lst_b" one position upwards.
The first element becomes the last. */

void	rb(t_data *data)
{
	ft_lst_upward(&(data->lst_b));
	write (1, "rb\n", 3);
}

/* rra (reverse rotate a) : Shifts all elements of the pile "lst_a" one position
down. The last element becomes the first. */

void	rra(t_data *data)
{
	ft_lst_down(&(data->lst_a));
	write (1, "rra\n", 4);
}
