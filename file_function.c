/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:32:43 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 17:56:13 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rr(t_list *stack_a, t_list *stack_b, int ac)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (ac == 1)
		write(1, "rr\n", 3);
}

void	rra(t_list **stack_a, int ac)
{
	t_list	*tmp;
	t_list	*head;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	tmp = ft_lstlast(*stack_a);
	head = *stack_a;
	while ((*stack_a)->next->next != NULL)
		(*stack_a) = (*stack_a)->next;
	(*stack_a)->next = NULL;
	tmp->next = head;
	*stack_a = tmp;
	if (ac == 1)
		write (1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int ac)
{
	t_list	*temp;
	t_list	*head;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	temp = ft_lstlast(*stack_b);
	head = *stack_b;
	while ((*stack_b)->next->next)
		(*stack_b) = (*stack_b)->next;
	(*stack_b)->next = NULL;
	temp -> next = head;
	*stack_b = temp;
	if (ac == 1)
		write (1, "rrb\n", 4);
}

void	rrr(t_list *stack_a, t_list *stack_b, int ac)
{
	rra(&stack_a, 0);
	rrb(&stack_b, 0);
	if (ac == 1)
		write(1, "rrr\n", 4);
}

void	pa(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list	*top;

	if (!stack_b || !(*stack_b))
		return ;
	top = (*stack_b);
	(*stack_b) = (*stack_b)-> next;
	ft_lstadd_front(stack_a, top);
	if (ac == 1)
		write (1, "pa\n", 3);
}
