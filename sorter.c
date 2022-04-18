/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:36:19 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 15:05:38 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	norm(t_range vals, t_list **stack_a, t_list **stack_b)
{
	int	index;

	while (vals.k <= vals.max)
	{
		index = (*stack_a)->index;
		if (index >= vals.min && index <= vals.max)
		{
			if (index < vals.med)
			{
				pb(stack_b, stack_a, 1);
				rb((*stack_b), 1);
			}
			else
				pb(stack_b, stack_a, 1);
			vals.k++;
		}
		else if (rotate_index((*stack_a)) > ft_lstsize((*stack_a)) / 2)
			rra(stack_a, 1);
		else if (rotate_index((*stack_a)) <= ft_lstsize((*stack_a)) / 2)
			ra((*stack_a), 1);
	}
}

void	sorter(t_list *stack_a, t_list *stack_b)
{
	t_range	vals;

	vals.size = ft_lstsize(stack_a);
	vals.to_be_pushed = ((vals.size - 5) / 4) + 1;
	vals.min = 0;
	vals.max = vals.min + vals.to_be_pushed - 1;
	vals.med = (vals.max + vals.min) / 2;
	vals.k = 0;
	while (vals.size > 5)
	{
		vals.k = vals.min;
		norm(vals, &stack_a, &stack_b);
		vals.size -= vals.to_be_pushed;
		vals.to_be_pushed = ((vals.size - 5) / 4) + 1;
		vals.min = min_index(stack_a);
		vals.max = vals.min + vals.to_be_pushed - 1;
		vals.med = (vals.max + vals.min) / 2;
	}
	sort_five(&stack_a, &stack_b, 6);
	sorter2(stack_a, stack_b);
}

void	sorter2(t_list *stack_a, t_list *stack_b)
{
	ft_lstlast(stack_a)-> index = -1;
	while (stack_b)
	{
		if (stack_a->index - 1 == stack_b->index)
			pa(&stack_a, &stack_b, 1);
		else if ((stack_b->index < stack_a->index)
			&& (stack_b->index > ft_lstlast(stack_a)->index))
		{
			pa(&stack_a, &stack_b, 1);
			ra(stack_a, 1);
		}
		else if (stack_a -> index - 1 == ft_lstlast(stack_a)->index)
			rra(&stack_a, 1);
		else if (get_index_big(stack_b) > ft_lstsize(stack_b) / 2)
			rrb(&stack_b, 1);
		else if (get_index_big(stack_b) <= ft_lstsize(stack_b) / 2)
			rb(stack_b, 1);
	}
	while (ft_lstlast(stack_a)-> index < stack_a->index
		&& ft_lstlast(stack_a)->index > -1)
		rra(&stack_a, 1);
}
