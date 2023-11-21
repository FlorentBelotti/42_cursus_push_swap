/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_stack_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:35 by fbelotti          #+#    #+#             */
/*   Updated: 2023/11/21 15:01:47 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun. */

void	sa(t_list lst_a)
{
	t_list	*temp;

	temp = lst_a ;
	if (ft_lstsize(temp) < 1)
		return ;

}

/* sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun. */

void	sb(t_list lst_b)

/* ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier. */

void	ra(t_list lst_a)

/* rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier. */

void	rb(t_list lst_b)

/* rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier. */

void	rra(t_list lst_a)

/* rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier. */

void	rrb(t_list lst_b)


