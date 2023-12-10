/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:45:16 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/10 18:21:10 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *head)
{
	while (head != NULL)
	{
		ft_printf("%d ", (int *)head->content);
		head = head->next;
	}
	ft_printf("\n");
}

int	main(int ac, char **av)
{
	t_data	data;
	t_list	*current;
	t_list	*next;
	int		i;
	int		value;

	i = 1;
	data.lst_a = NULL;
	data.lst_b = NULL;
	while (i < ac)
	{
		value = atoi(av[i]);
		ft_lst_add(&data.lst_a, value);
		i++;
	}
	ft_printf("Ma liste :");
	print_list(data.lst_a);
	current = data.lst_a;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	return (0);
}
