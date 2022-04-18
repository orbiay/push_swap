/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:29:18 by orbiay            #+#    #+#             */
/*   Updated: 2022/04/17 15:04:40 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdlib.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst == NULL || new == NULL)
		return ;
	new ->next = *alst;
	*alst = new;
}

t_list	*lstnew(int data)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	new -> data = data;
	new -> next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	t_list	*save;

	if (!lst)
		return ;
	if (*lst)
	{
		temp = *lst;
		save = ft_lstlast(*lst);
		save -> next = new;
		return ;
	}
	*lst = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (lst == 0)
		return (0);
	i = 0;
	while (lst != '\0')
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != 0)
		lst = lst -> next;
	return (lst);
}
