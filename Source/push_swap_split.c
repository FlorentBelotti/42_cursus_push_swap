/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:26:39 by fbelotti          #+#    #+#             */
/*   Updated: 2024/02/21 13:51:05 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (s2[++i] && i < n)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int	count_words(char *str, char sep)
{
	int	word_nb;
	int	i;

	word_nb = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
			word_nb++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (word_nb);
}

char	**push_swap_split(char *av, char sep, t_data *data)
{
	int		word_nb;
	char	**args;

	if (!av)
		return (NULL);
	data->split_flag = 1;
	word_nb = count_words(av, sep);
	args = malloc (sizeof(char *) * (word_nb + 1));
	if (!args)
		return (NULL);
	memory_allocation(args, av);
	return (args);
}

void	memory_allocation(char **args, char *av)
{
	int	i;
	int	j;
	int	flag;

	j = 0;
	i = 0;
	while (av[i])
	{
		while (av[i] && av[i] == ' ')
			i++;
		flag = i;
		while (av[i] && av[i] != ' ')
			i++;
		if (i > flag)
		{
			args[j] = malloc (sizeof(char) * (i - flag) + 1);
			if (!args[j])
				free_array(args);
			ft_strncpy(args[j], &av[flag], i - flag);
			j++;
		}
	}
	args[j] = NULL;
}

void	free_array(char **args)
{
	int	j;

	if (!args)
		return ;
	j = 0;
	while (args[j])
	{
		free(args[j]);
		j++;
	}
	free(args);
	return ;
}
