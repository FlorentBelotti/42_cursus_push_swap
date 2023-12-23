/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:45:16 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/22 18:31:25 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* void	print_list(t_list *lst_a, t_list *lst_b)
{
	t_list	*current_a;
	t_list	*current_b;
	int		i;

	printf("\033[1;34mList A\033[0m\t\t\033[1;32mList B\033[0m\n\n");
	current_a = lst_a;
	current_b = lst_b;
	i = 1;
	while (current_a != NULL || current_b != NULL)
	{
		if (current_a != NULL)
		{
			printf("\033[1m%d : \033[0m ", i); // Bold index
			printf("\033[34m%d\t\t\033[0m", current_a->content); // Blue for lst_a
			current_a = current_a->next;
		}
		else
			printf("\t");

		if (current_b != NULL)
		{
			printf("\033[1m%d : \033[0m ", i); // Bold index
			printf("\033[32m%d\033[0m", current_b->content); // Green for lst_b
			current_b = current_b->next;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}

 int	main(int ac, char **av)
{
	t_data	data;
	t_list	*new_node_lst_a;
	t_list	*new_node_lst_b;
	t_list	*current;
	int		i;
	int		val;

	data.lst_a = NULL;
	data.lst_b = NULL;

	// creating lst_a & lst_b

	i = 1;
	while (i < ac)
	{
		val = atoi(av[i]);
		new_node_lst_a = create_node(val);
		new_node_lst_b = create_node(val);
		if (!new_node_lst_a || !new_node_lst_b)
		{
			printf("Memory allocation failed (main)");
			return (1);
		}
		new_node_lst_a->next = data.lst_a;
		new_node_lst_b->next = data.lst_b;
		data.lst_a = new_node_lst_a;
		data.lst_b = new_node_lst_b;
		i++;
	}

	displaying the lists, and the modified lists

	printf("\n");
	print_list(data.lst_a, data.lst_b);
	write (1, "operation(s) :\n\n", 17);
	pb(&data);
	printf("\n");
	print_list(data.lst_a, data.lst_b);
	return (0);
} */
