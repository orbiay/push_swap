/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:35:24 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 17:54:37 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_it(char *input, t_list **stack_a, t_list **stack_b)
{
	if (ft_strncmp(input, "sa\n", 3) == 0)
		sa(*stack_a, 0);
	else if (ft_strncmp(input, "sb\n", 3) == 0)
		sb(*stack_b, 0);
	else if (ft_strncmp(input, "ss\n", 3) == 0)
		ss(*stack_a, *stack_b, 0);
	else if (ft_strncmp(input, "ra\n", 3) == 0)
		ra(*stack_a, 0);
	else if (ft_strncmp(input, "rr\n", 3) == 0)
		rr(*stack_a, *stack_b, 0);
	else if (ft_strncmp(input, "rra\n", 4) == 0)
		rra(stack_a, 0);
	else if (ft_strncmp(input, "rrr\n", 4) == 0)
		rrr(*stack_a, *stack_b, 0);
	else if (ft_strncmp(input, "rb\n", 3) == 0)
		rb(*stack_b, 0);
	else if (ft_strncmp(input, "rrb\n", 4) == 0)
		rrb(stack_a, 0);
	else if (ft_strncmp(input, "pa\n", 3) == 0)
		pa(stack_a, stack_b, 0);
	else if (ft_strncmp(input, "pb\n", 3) == 0)
		pb(stack_b, stack_a, 0);
	else
		error();
	return (1);
}

void	stack_sort(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->data > stack_a->next->data)
		{
			write(1, "\033[0;33mKO", 9);
			exit(1);
		}
		stack_a = stack_a->next;
	}
	write(1, "\033[0;32mOK", 9);
}
