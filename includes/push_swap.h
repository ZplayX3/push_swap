/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:23:01 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/22 10:15:45 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_stack
{
	int		value;
	int		index;
	int		pos;
	struct s_stack	*next;
}	t_stack;
//	        UTILS
void	ft_putstr(char *str);
void	free_stack(t_stack **stack);
int	ft_atoi(const char *nptr);
//          STACK
t_stack	*stack_bottom(t_stack *src);
t_stack	*stack_before_bottom(t_stack *stack);
t_stack	*create_stack(int i);
void	stack_add(t_stack **stack, t_stack *new);
int	get_stack_size(t_stack	*stack);
//	        OERATIONS
//  push
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
//  swap
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
//  rotate
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
//  reverse_rotate
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
//			ALGORITHME
int	index_final(t_stack *src, int i);
int	bit_number(t_stack *src);
void	radix(t_stack *src, t_stack *dest);
//			MAIN
int is_sorted (t_stack *src);
//			ERRORS
int input_check(char **av);
void	exit_error(t_stack **stack_a, t_stack **stack_b);
//			ERRORS_UTILS
int is_digit(char c);
int is_sign(char c);
int nb_cmp(const char *s1, const char *s2);
//			INITIALIZATION
t_stack	*fill_stack(int ac, char **av);
#endif
