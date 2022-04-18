/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:23:05 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 11:33:18 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void	sa(t_list *stack_a, int ac)
{
	int	swap;
	int	swap2;

	if (ft_lstsize(stack_a) <= 1)
		return ;
	swap = stack_a-> data;
	swap2 = stack_a ->index;
	stack_a->data = stack_a->next->data;
	stack_a -> index = stack_a -> next -> index;
	stack_a->next->data = swap;
	stack_a -> next -> index = swap2;
	if (ac == 1)
		write (1, "sa\n", 3);
}

void	sb(t_list *stack_b, int ac)
{
	int	swap;
	int	swap2;

	if (ft_lstsize(stack_b) <= 1)
		return ;
	swap = stack_b-> data;
	swap2 = stack_b ->index;
	stack_b->data = stack_b->next->data;
	stack_b -> index = stack_b -> next -> index;
	stack_b->next->data = swap;
	stack_b -> next -> index = swap2;
	if (ac == 1)
		write (1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b, int ac)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (ac == 1)
		write(1, "ss\n", 3);
}

void	ra(t_list *stack_a, int ac)
{
	int	temp;
	int	temp2;

	if (ft_lstsize(stack_a) <= 1)
		return ;
	temp = stack_a->data;
	temp2 = stack_a -> index;
	while (stack_a->next)
	{
		stack_a->data = stack_a->next->data;
		stack_a -> index = stack_a -> next -> index;
		stack_a = stack_a->next;
	}
	stack_a->data = temp;
	stack_a -> index = temp2;
	if (ac == 1)
		write (1, "ra\n", 3);
}

void	rb(t_list *stack_b, int ac)
{
	int	temp;
	int	temp2;

	if (ft_lstsize(stack_b) <= 1)
		return ;
	temp = stack_b->data;
	temp2 = stack_b -> index;
	while (stack_b->next)
	{
		stack_b->data = stack_b->next->data;
		stack_b -> index = stack_b -> next -> index;
		stack_b = stack_b->next;
	}
	stack_b->data = temp;
	stack_b -> index = temp2;
	if (ac == 1)
		write (1, "rb\n", 3);
}
