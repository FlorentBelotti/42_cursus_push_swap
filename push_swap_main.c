/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/11 17:02:21 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
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
	{
		write (1, "Error : invalid arguments\n", 26);
		return (0);
	}
	if (check_limit(&data) == 1 && check_double(&data) == 1)
		choose_sort(&data);
	else
		write (1, "Error : inappropriate values\n", 29);
}

void	choose_sort(t_data *data)
{
	if (ft_lstsize(&data->lst_a) <= 3)
		tiny_sort(data);
	else
		push_n_partition(data);
}

