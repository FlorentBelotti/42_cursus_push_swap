/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:58 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/26 16:26:26 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Libraries */

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* Structure */

	/* data : contains the piles and the variables. */

typedef struct s_data {
	struct s_list	*lst_a;
	struct s_list	*lst_b;
}	t_data;

	/* list : structure of the piles. */

typedef struct s_list {
	int				content;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

/* Functions files : description of the functions can be found in the
indicated .c files. */

	/* push_swap_utils.c : some practical functions that will be used
	troughout the project. */

int		ft_lstsize(t_list **lst);
t_list	*ft_lstlast(t_list **lst);
int		ft_atoi(char *str);

	/* lst_operations : Contains functions called for stack manipulation. */

void	ft_swap_lst(t_list **lst);
void	ft_lst_upward(t_list **lst);
void	ft_lst_down(t_list **lst);
void	ft_lst_interchanger(t_list **src, t_list **dest);

	/* lst_swapper.c : contains nodes movements and nodes modifications
	functions applied to a single list. */

void	sa(t_data *data);
void	sb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rra(t_data *data);

	/* lst_swapper_2.c : contains nodes movements and nodes
	modifications functions applied to a single list. */

void	rrr(t_data *data);

	/* lst_interchanger.c : contains nodes movements and nodes modifications
	functions applied between lists. */

void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	rr(t_data *data);
void	rrb(t_data *data);

	/* lst_memory_management : contains the functions to create and
	delete a list. */

void	free_list(t_list *head);
t_list	*create_node(int val);
void	create_stack(t_list **stack_a, int val);

	/* push_swap_split.c */

char	*ft_strncpy(char *s1, char *s2, int n);
int		count_words(char *str, char sep);
char	**push_swap_split(char *av, char sep);
void	memory_allocation(char **args, char *av);
void	free_array(char **args, int j);

	/* test */

void	print_list(t_list *lst_a);

#endif
