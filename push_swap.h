/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:58 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/08 11:33:32 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Libraries */

#include <unistd.h>
#include <stdlib.h>

/* Structure */

	/* data : contains the piles and the variables. */

typedef struct s_data {
		struct s_list	*lst_a;
		struct s_list	*lst_b;
}	t_data;

	/* list : structure of the piles. */

typedef struct s_list {
	void			*content;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

/* Functions files : description of the functions can be found in the
indicated .c files. */

	/* utils.c : some practical functions that will be used
	troughout the project. */

int		ft_lstsize(t_list **lst);

	/* handle_stack : Contains functions called for stack manipulation. */

void	ft_swap_lst(t_data *data);
void	ft_lst_upward(t_data *data);
void	ft_lst_down(t_data *data);

	/* one_stack_operations.c : contains nodes movements and nodes modifications
	functions applied to a single list. */

void	sa(t_data *data);
void	sb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rra(t_data *data);

	/* one_stack_operations_2.c : contains nodes movements and nodes
	modifications functions applied to a single list. */

void	rrr(t_data *data);

	/* two_stack_operations.c : contains nodes movements and nodes modifications
	functions applied between lists. */

void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	rr(t_data *data);
void	rrb(t_data *data);

#endif
