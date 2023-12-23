/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:26:39 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/23 14:40:10 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (s2[i] && ++i < n)
	{
		s1[i] = s2[i];
	}
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

char	**push_swap_split(char *av, char sep)
{
	int		word_nb;
	char	**args;

	if (!av)
		return (NULL);
	word_nb = count_words(av, sep);
	args = malloc (sizeof(char *) * (word_nb + 1));
	if (!args)
		return (NULL);
	args[0] = 0;
	memory_allocation(args, av);
	return (args);
}

void	memory_allocation(char **args, char *av)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
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
			ft_strncpy(args[j++], &av[flag], i - flag);
		}
	}
	args[j] = NULL;
}
