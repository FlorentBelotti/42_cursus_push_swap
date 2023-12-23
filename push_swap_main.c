/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/23 14:25:09 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	int		val;
	t_data	data;

	i = 1;
	data.lst_a = NULL;
	if (ac < 1 || !av[1][0])
		return (1);
	if (ac == 2)
		av = push_swap_split(av[1], ' ');
	while (i < ac)
	{
		val = atoi(av[i]);
		create_stack(&data.lst_a, val);
		i++;
	}
	print_list(data.lst_a);
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
