/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/23 16:00:06 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac < 2 || !av[1][0])
		return (0);
	set_base_value(&data);
	if (ac == 2)
	{
		if (is_number(av, data.index))
			av = push_swap_split(av[1], ' ', &data);
		data.index = 0;
	}
	if (is_number(av, data.index))
		val_to_stack(data.index, av, &data.lst_a, &data);
	else
	{
		write (2, "Error : invalid arguments\n", 26);
		return (0);
	}
	sort_or_error(&data);
	free_pile(&data);
	if (data.index == 0)
		free_array(av);
}

void	sort_or_error(t_data *data)
{
	if (check_double(data) == 1)
		choose_sort(data);
	else
		write (2, "Error : double detected\n", 24);
}

void	choose_sort(t_data *data)
{
	if (is_not_sorted(data))
	{
		if (ft_lstsize(&data->lst_a) == 5)
			sort_five_numbers(data);
		else if (ft_lstsize(&data->lst_a) <= 3)
			tiny_sort(data);
		else
			push_n_partition(data);
	}
}

int	is_not_sorted(t_data *data)
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

void	free_pile(t_data *data)
{
	free_list(data->lst_a);
	free_list(data->lst_b);
}
