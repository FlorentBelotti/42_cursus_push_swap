/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:47:58 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/19 11:07:59 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Libraries */

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

/* Structure */

	/* data : contains the piles and the variables. */

typedef struct s_data {
	struct s_list	*lst_a;
	struct s_list	*lst_b;
	int				partition_base;
	int				partition_factor;
	int				partition_nb_of_elements;
	int				start;
	int				end;
	int				partition_nb;
	int				list_size;
}	t_data;

	/* list : structure of the piles. */

typedef struct s_list {
	int				content;
	int				index;
	int				order;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

/* Functions files : description of the functions can be found in the
indicated .c files. */

	/* push_swap_main.c */

void	choose_sort(t_data *data);
void	free_pile(t_data *data);
void	sort_or_error(t_data *data);
int		is_not_sorted(t_data *data);

	/* push_swap_utils.c : some practical functions that will be used
	troughout the project. */

int		ft_lstsize(t_list **lst);
int		ft_atoi(char *str);
int		is_number(char **av, int i);
int		is_smallest_node(t_list **pile, t_list *node_to_check);
t_list	*ft_lstlast(t_list **lst);

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
void	val_to_stack(int i, char **av, t_list **lst_a);

	/* push_swap_split.c */

char	*ft_strncpy(char *s1, char *s2, int n);
char	**push_swap_split(char *av, char sep);
int		count_words(char *str, char sep);
void	memory_allocation(char **args, char *av);
void	free_array(char **args);

	/* tiny_sort */

int		biggest_content(t_list **lst_a, int size);
void	tiny_sort(t_data *data);
void	sort_five_numbers(t_data *data);

	/* sort_index */

void	define_index(t_list **pile);
int		head_inferior_index_pos(t_data *data, int index_max);
int		tail_inferior_index_pos(t_data *data, int index_max);
int		there_is_inferior_index(t_data *data, int index_max);
int		there_is_index_max(t_data *data, int index_max);

	/* sort_group */

int		calculate_number_of_partitions(t_data *data);
void	push_n_partition(t_data *data);
void	push_superior_index_into_pile_a(t_data *data, int index_max);
void	push_inferior_index_into_pile_b(t_data *data, int index_max);

	/* sort_pile */

void	set_pile_order(t_list	**pile);
int		biggest_index_position_in_partition(t_data *data);

	/* sort_rotation */

void	choose_rotation_for_pile_b(t_data *data, int head_pos);
void	choose_rotation_for_pile_a(t_data *data, int head_pos, int tail_pos);

	/* error_check */

int		check_limit(t_data *data);
int		check_double(t_data *data);

#endif
