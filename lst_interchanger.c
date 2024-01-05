/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_interchanger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:54:25 by fbelotti          #+#    #+#             */
/*   Updated: 2024/01/03 14:41:44 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ss : sa and sb in the same time */

void	ss(t_data *data)
{
	ft_swap_lst(&(data->lst_a));
	ft_swap_lst(&(data->lst_b));
	write (1, "ss\n", 3);
}

/* pa (push a) : the first node of lst_b become the first node of lst_a.
Do nothing if lst_b is empty. */

void	pa(t_data *data)
{
	ft_lst_interchanger(&(data->lst_a), &(data->lst_b));
	write (1, "pa\n", 3);
}

/* pb (push b) : the first node of lst_a become the first node of lst_b.
Do nothing if lst_a is empty. */

void	pb(t_data *data)
{
	ft_lst_interchanger(&(data->lst_a), &(data->lst_b));
	write (1, "pb\n", 3);
}

/* rr : ra and rb in the same time. */

void	rr(t_data *data)
{
	ft_lst_upward(&(data->lst_a));
	ft_lst_upward(&(data->lst_b));
	write (1, "rr\n", 3);
}

/* rrr : rra and rrb in the same time. */

void	rrr(t_data *data)
{
	ft_lst_down(&(data->lst_a));
	ft_lst_down(&(data->lst_b));
	write (1, "rrr\n", 4);
}
