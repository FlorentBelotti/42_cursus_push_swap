/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/10 16:11:46 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	//int		biggest_pos;
	t_data	data;

	i = 1;
	data.lst_a = NULL;
	data.lst_b = NULL;
	if (ac == 2)
	{
		av = push_swap_split(av[1], ' ');
		i = 0;
	}
	if (is_number(av, i))
		val_to_stack(i, av, &data.lst_a);
	else
		write (1, "Error : invalid arguments\n", 26);
	if (ft_lstsize(&data.lst_a) <= 3)
		tiny_sort(&data);
	else
		push_n_partition(&data);
	//biggest_pos = biggest_index_position_in_partition(&data);
	return (0);
}
