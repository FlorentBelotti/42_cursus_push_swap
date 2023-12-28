/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/28 17:22:23 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	t_data	data;

	i = 1;
	data.lst_a = NULL;
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
	print_list(data.lst_a);
	return (0);
}

void	print_list(t_list *lst_a)
{
	t_list	*current_a;

	current_a = lst_a;
	while (current_a != NULL)
	{
		printf("[previous: %p]\n[content: %d]\n[next: %p]\n[current adress: %p]\n", current_a->previous, current_a->content, current_a->next, current_a);
		current_a = current_a->next;
		printf("---------\n");
	}
}
