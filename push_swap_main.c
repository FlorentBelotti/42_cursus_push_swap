/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/12 14:55:38 by fbelotti         ###   ########.fr       */
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
	check_pile(&data);
	free_pile(&data);
}

void	check_pile(t_data *data)
{
	if (check_limit(data) == 1 && check_double(data) == 1)
	{
		if (need_sort(data) == 1)
			choose_sort(data);
	}
	else
		write (1, "Error : inappropriate values\n", 29);
}

int	need_sort(t_data *data)
{
	t_list	*current;

	current = data->lst_a;
	while (current && current->next)
	{
		if (current->content > current->next->content)
			return (1);
		current = current->next;
	}
	return (0);
}

void	choose_sort(t_data *data)
{
	if (ft_lstsize(&data->lst_a) == 5)
		sort_five_numbers(data);
	else if (ft_lstsize(&data->lst_a) <= 3)
		tiny_sort(data);
	else
		push_n_partition(data);
}

void	free_pile(t_data *data)
{
	free_list(data->lst_a);
	free_list(data->lst_b);
}
