/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_stacks_operations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:54:25 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/10 15:13:27 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ss : sa et sb en même temps. */

void	ss(t_data *data);

/* pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide. */

void	pa(t_data *data);

/* pb (push b) : Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide. */

void	pb(t_data *data);

/* rr : ra et rb en même temps. */

void	rr(t_data *data);

/* rrr : rra et rrb en même temps */

void	rrr(t_data *data);
