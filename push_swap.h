/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:58 by fbelotti          #+#    #+#             */
/*   Updated: 2023/11/21 15:03:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

/* utils.c */

int		ft_lstsize(t_list *lst);

/* rules.c */

void	sa(t_list lst_a);
void	sb(t_list lst_b);
void	ss(t_list lst_a, t_list lst_b);
void	pa(t_list lst_a, t_list lst_b);
void	pb(t_list lst_a, t_list lst_b);
void	ra(t_list lst_a);
void	rb(t_list lst_b);
void	rr(t_list lst_a, t_list lst_b);
void	rra(t_list lst_a);
void	rrb(t_list lst_b);
void	rrr(t_list lst_a, t_list lst_b);

#endif
