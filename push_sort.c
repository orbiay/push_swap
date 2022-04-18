/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:06:39 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 11:49:25 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_three(t_list **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data)
	{
		sa(*stack_a, 1);
		rra(stack_a, 1);
	}
	else if ((*stack_a)->next->next->data > (*stack_a)->data
		&& (*stack_a)->data > (*stack_a)->next->data)
		sa(*stack_a, 1);
	else if ((*stack_a)->next->data > (*stack_a)->next->next->data
		&& (*stack_a)->data < (*stack_a)->next->next->data)
	{
		sa(*stack_a, 1);
		ra(*stack_a, 1);
	}
	else if ((*stack_a)->next->data > (*stack_a)->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data)
		rra(stack_a, 1);
	else if ((*stack_a)->data > (*stack_a)->next->next->data
		&& (*stack_a)->next->next->data > (*stack_a)->next->data)
		ra(*stack_a, 1);
}

int	get_index(t_list *stack_a)
{
	int		i;
	int		j;
	int		data;
	t_list	*new;

	data = stack_a->data;
	new = stack_a;
	j = 0;
	i = 0;
	while (stack_a)
	{
		if (stack_a->data < data)
		{
			data = stack_a->data;
			j = i;
		}
		stack_a = stack_a->next;
		i++;
	}
	stack_a = new;
	return (j);
}

int	get_index_big(t_list *stack_a)
{
	int		i;
	int		j;
	int		data;
	t_list	*new;

	data = stack_a->index;
	new = stack_a;
	j = 0;
	i = 0;
	while (stack_a)
	{
		if (stack_a->index > data)
		{
			data = stack_a->index;
			j = i;
		}
		stack_a = stack_a->next;
		i++;
	}
	stack_a = new;
	return (j);
}

void	r_rotate(int index, t_list **stack_a, t_list **stack_b)
{
	while (index < ft_lstsize(*stack_a))
	{
		rra(stack_a, 1);
		index++;
	}
	pb(stack_b, stack_a, 1);
}

void	rotate(int index, t_list **stack_a, t_list **stack_b)
{
	while (index > 0)
	{
		ra(*stack_a, 1);
		index--;
	}
	pb(stack_b, stack_a, 1);
}
