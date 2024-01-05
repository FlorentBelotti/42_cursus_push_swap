/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/01/03 16:24:43 by fbelotti         ###   ########.fr       */
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
	//data.pivot = define_pivot(&data.lst_a);
	//printf("pivot : %d\n", data.pivot);
	//printf("\n----- LISTE A BEFORE -----\n");
	//print_list(data.lst_a);
	//printf("\npivot : %d\n", data.pivot);
	divide_pile_into_four(&data);
	printf("\n----- LISTE A -----\n");
	print_list(data.lst_a);
	//printf("\n----- LISTE B -----\n");
	//print_list(data.lst_b);
	return (0);
}

void	print_list(t_list *pile)
{
	t_list	*current_a;

	printf("content\t");
	current_a = pile;
	while (current_a != NULL)
	{
		//printf("[previous: %p]\n[content: %d]\n[index: %d]\n[next: %p]\n[current adress: %p]\n", current_a->previous, current_a->content, current_a->index, current_a->next, current_a);
		printf("%d\t", current_a->content);
		current_a = current_a->next;
	}
	printf("\n");
	printf("index\t");
	current_a = pile;
	while (current_a != NULL)
	{
		//printf("[previous: %p]\n[content: %d]\n[index: %d]\n[next: %p]\n[current adress: %p]\n", current_a->previous, current_a->content, current_a->index, current_a->next, current_a);
		printf("%d\t", current_a->index);
		current_a = current_a->next;
	}
	printf("\n");
}
