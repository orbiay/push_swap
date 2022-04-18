/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:55:10 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 17:56:46 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*input;
	int		*tab;
	int		i;

	i = 1;
	stack_b = NULL;
	if (ac > 2)
	{
		put_it(&stack_a, av, ac);
		tab = malloc(sizeof(int) * ft_lstsize(stack_a));
		put_in_tab(stack_a, tab);
		if (!check_doubles(tab, ac))
			exit(1);
		input = get_next_line(0);
		while (input)
		{
			if (check_it(input, &stack_a, &stack_b))
				input = get_next_line(0);
		}
		stack_sort(stack_a);
	}
}
