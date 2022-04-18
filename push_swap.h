/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:29:34 by orbiay            #+#    #+#             */
/*   Updated: 2022/02/12 17:53:57 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BUFFER_SIZE 10
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct list
{
	int			data;
	struct list	*next;
	int			index;
}t_list;

typedef struct range
{
	int	min;
	int	max;
	int	med;
	int	size;
	int	to_be_pushed;
	int	k;
}t_range;

long	ft_atoi(const char *str);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*lstnew(int data);
t_list	*ft_lstlast(t_list *lst);
void	ra(t_list *stack_a, int ac);
void	rb(t_list *stack_b, int ac);
void	sa(t_list *stack_a, int ac);
void	sb(t_list *stack_b, int ac);
void	rra(t_list **stack_a, int ac);
int		ft_lstsize(t_list *lst);
void	rrb(t_list **stack_b, int ac);
void	pa(t_list **stack_a, t_list **stack_b, int ac);
void	pb(t_list **stack_b, t_list **stack_a, int ac);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	sort_three(t_list **stack_a);
void	sort_five(t_list **stack_a, t_list **stack_b, int ac);
int		get_index(t_list *stack_a);
void	put_in_tab(t_list *stack_a, int *tab);
void	sort_tab(int *tab, t_list *stack_a);
void	index_list(int *tab, t_list *stack_a);
int		min_index(t_list *stack_a);
int		rotate_index(t_list *stack_a);
void	sorter(t_list *stack_a, t_list *stack_b);
void	sorter2(t_list *stack_a, t_list *stack_b);
int		get_index_big(t_list *stack_a);
void	is_intiger(char **av);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *s);
int		ft_strchr(char *str);
char	*ft_substr(char *s, int start, int len);
char	*get_next_line(int fd);
void	error(void);
void	rrr(t_list *stack_a, t_list *stack_b, int ac);
void	rr(t_list *stack_a, t_list *stack_b, int ac);
void	ss(t_list *stack_a, t_list *stack_b, int ac);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		check_doubles(int *tab, int ac);
void	check_char(char **av);
void	put_it(t_list **stack_a, char **av, int ac);
int		sort(t_list *stack_a);
void	function(t_list *stack_a, t_list *stack_b, int *tab, int ac);
int		check_it(char *input, t_list **stack_a, t_list **stack_b);
void	stack_sort(t_list *stack_a);
void	r_rotate(int index, t_list **stack_a, t_list **stack_b);
void	rotate(int index, t_list **stack_a, t_list **stack_b);
#endif
