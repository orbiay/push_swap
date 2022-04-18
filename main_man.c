/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_man.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:53:02 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 16:46:44 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*tab;

	stack_b = NULL;
	put_it(&stack_a, av, ac);
	tab = malloc(sizeof(int) * ft_lstsize(stack_a));
	put_in_tab(stack_a, tab);
	if (ac > 2 && check_doubles(tab, ac - 1) && sort(stack_a) == 0)
	{
		if (ac == 3 || ac == 4)
		{
			if (ac == 3 && stack_a->data > stack_a->next->data)
				sa(stack_a, 1);
			else
				sort_three(&stack_a);
			exit(1);
		}
		else if (ac == 5)
		{
			sort_five(&stack_a, &stack_b, 5);
			return (0);
		}
		function(stack_a, stack_b, tab, ac - 1);
	}
}
