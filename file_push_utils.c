/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_push_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:10:53 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 16:48:55 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	is_intiger(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] > 57 || av[i][j] < 48)
			{
				write (1, "ERROR\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	check_char(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '+' || av[i][j] == '-')
			j++;
		if ((av[i][j - 1] == '+' && av[i][j] == '\0')
			|| (av[i][j - 1] == '-' && av[i][j] == '\0'))
			error();
		while (av[i][j])
		{
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
			{
				write (2, "ERROR\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	function(t_list *stack_a, t_list *stack_b, int *tab, int ac)
{
	check_doubles(tab, ac);
	sort_tab(tab, stack_a);
	index_list(tab, stack_a);
	sorter(stack_a, stack_b);
}

int	sort(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
