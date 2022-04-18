/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:06:01 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 16:49:17 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	pb(t_list **stack_b, t_list **stack_a, int ac)
{
	t_list	*top;

	if (!stack_a || !(*stack_a))
		return ;
	top = (*stack_a);
	(*stack_a) = (*stack_a)-> next;
	ft_lstadd_front(stack_b, top);
	if (ac == 1)
		write (1, "pb\n", 3);
}

void	error(void)
{
	write (2, "ERROR\n", 6);
	exit(1);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	rest;
	long	sen;

	i = 0;
	rest = 0;
	sen = 1;
	if (*str == '\0')
		error();
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sen = sen * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		rest = rest * 10 + str[i++] - 48;
		if (rest * sen < -2147483648 || rest * sen > 2147483647)
			error();
	}
	return (rest * sen);
}
