/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:48:51 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 11:49:01 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_five(t_list **stack_a, t_list **stack_b, int ac)
{
	int		i;
	int		j;
	int		index;

	i = 2;
	j = 0;
	if (ac >= 5)
	{
		if (ac == 5)
			i = 1;
		while (j < i)
		{
			index = get_index(*stack_a);
			if (index * 2 >= ft_lstsize(*stack_a))
				r_rotate(index, stack_a, stack_b);
			else if (index * 2 < ft_lstsize(*stack_a))
				rotate(index, stack_a, stack_b);
			j++;
		}
		j = 0;
		sort_three(stack_a);
		while (j++ < i)
			pa(stack_a, stack_b, 1);
	}
}
