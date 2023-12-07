/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:58 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/07 18:12:17 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Libraries */

#include <stdef.h>
#include <unistd.h>
#include <stdlib.h>

/* Structure */

	/* data : contains the piles and the variables. */

typedef struct s_data {
		struct s_list	* list_a;
		struct s_list	* list_b;
}	t_data;

	/* list : structure of the piles. */

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

/* Functions files : description of the functions can be found in the
indicated .c files. */

	/* utils.c : some practical functions that will be used
	troughout the project. */

int		ft_lstsize(t_list **lst);
t_list	*ft_lstlast(t_list **lst);
t_list	*ft_lstblast(t_list **lst)

	/* one_stack_operations.c : contains nodes movements and nodes modifications
	functions applied to a single list. */

void	sa(t_list **lst_a);
void	sb(t_list **lst_b);
void	ra(t_list **lst_a);
void	rb(t_list **lst_b);
void	rra(t_list **lst_a);

	/* one_stack_operations_2.c : contains nodes movements and nodes
	modifications functions applied to a single list. */

void	rrr(t_list **lst_a, t_list **lst_b);

	/* two_stack_operations.c : contains nodes movements and nodes modifications
	functions applied between lists. */

void	ss(t_list **lst_a, t_list **lst_b);
void	pa(t_list **lst_a, t_list **lst_b);
void	pb(t_list **lst_a, t_list **lst_b);
void	rr(t_list **lst_a, t_list **lst_b);
void	rrb(t_list **lst_b);

#endif
