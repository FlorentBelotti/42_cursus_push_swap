/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/27 16:10:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	val_to_stack(int i, char **av, t_list **lst_a)
{
	int		val;

	while (av[i])
	{
		val = ft_atoi(av[i]);
		create_stack(lst_a, val);
		i++;
	}
}

int	is_number(char **av, int i)
{
	int		j;

	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == ' ' || av[i][j] == '\t' || av[i][j] == '\n')
				j++;
			else if (av[i][j] == '-' &&
			(av[i][j + 1] >= '0' && av[i][j + 1] <= '9'))
				j++;
			else if (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	t_data	data;

	i = 1;
	data.lst_a = NULL;
	if (ac == 1)
		return (1);
	if (ac == 2)
	{
		av = push_swap_split(av[1], ' ');
		i = 0;
	}
	if (is_number(av, i))
		val_to_stack(i, av, &data.lst_a);
	else
		write (1, "Error : invalid arguments\n", 26);
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
