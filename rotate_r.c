/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:06:03 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 16:48:01 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	put_it(t_list **stack_a, char **av, int ac)
{
	t_list	*new;
	int		i;

	check_char(av);
	i = 1;
	while (i < ac)
	{
		new = lstnew(ft_atoi(av[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

int	check_doubles(int *tab, int ac)
{
	int	i;
	int	j;

	j = 0;
	while (j < ac)
	{
		i = 0;
		while (i < ac)
		{
			if (tab[i] == tab[j] && i != j)
			{
				write (2, "ERROR\n", 6);
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

int	rotate_index(t_list *stack_a)
{
	int	i;
	int	save;
	int	index;

	i = 0;
	index = stack_a->index;
	while (stack_a)
	{
		if (index > stack_a->index)
		{
			index = stack_a->index;
			save = i;
		}
		stack_a = stack_a->next;
		i++;
	}
	return (save);
}
