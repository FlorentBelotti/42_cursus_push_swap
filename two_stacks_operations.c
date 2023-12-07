/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_stacks_operations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:54:25 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/07 16:07:50 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ss : sa et sb en même temps. */

void	ss(t_list **lst_a, t_list **lst_b)

/* pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide. */

void	pa(t_list **lst_a, t_list **lst_b)

/* pb (push b) : Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide. */

void	pb(t_list **lst_a, t_list **lst_b)

/* rr : ra et rb en même temps. */

void	rr(t_list **lst_a, t_list **lst_b)

/* rrr : rra et rrb en même temps */

void	rrr(t_list **lst_a, t_list **lst_b)
