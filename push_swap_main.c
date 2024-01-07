/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/01/07 22:20:59 by fbelotti         ###   ########.fr       */
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
	push_n_partition_in_pile_b(&data);
	print_list(data.lst_a);
	printf("\n pile b \n");
	print_list(data.lst_b);
	return (0);
}

// clear ; comp *.c && ./a.out 780 63 212 389 772 670 500 674 840 308 82 277 219 333 379 131 702 52 482 403 590 10 760 987 100 746 754 741 191 108 68 428 423 271 471 902 143 548 790 179 926

void	print_list(t_list *pile)
{
	t_list	*current_a;

	printf("content\t");
	current_a = pile;
	while (current_a != NULL)
	{
		printf("[previous: %p]\n[content: %d]\n[index: %d]\n[next: %p]\n[current adress: %p]\n", current_a->previous, current_a->content, current_a->index, current_a->next, current_a);
		current_a = current_a->next;
	}
}
