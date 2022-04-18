/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:25:47 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 14:36:55 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_tab(int *tab, t_list *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_lstsize(stack_a) - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			j = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = j;
			i = -1;
		}
		i++;
	}
}

void	put_in_tab(t_list *stack_a, int *tab)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		tab[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
}

void	index_list(int *tab, t_list *stack_a)
{
	int		i;
	t_list	*first;

	i = 0;
	first = stack_a;
	while (first)
	{	
		if (first->data == tab[i])
		{
			first->index = i;
			first = first->next;
			i = 0;
		}
		else
			i++;
	}
	first = stack_a;
}

int	min_index(t_list *stack_a)
{
	int	j;

	j = 0;
	j = stack_a->index;
	while (stack_a)
	{
		if (stack_a->index < j)
		{
			j = stack_a->index;
		}
		stack_a = stack_a->next;
	}
	return (j);
}
