/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:37:52 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 08:00:29 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	number(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && is_digit(av[i]))
		i++;
	if (av[i] != '\0' && !is_digit(av[i]))
		return (0);
	return (1);
}

static int	duplicates(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 1;
		while (av[j])
		{
			if (j != i && nb_cmp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	zero(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]))
		i++;
	while (av[i] && av[i] == '0')
		i++;
	if (av[i] != '\0')
		return (0);
	return (1);
}

int	input_check(char **av)
{
	int	i;
	int	zeros;

	zeros = 0;
	i = 1;
	while (av[i])
	{
		if (!number(av[i]))
			return (0);
		zeros += zero(av[i]);
		i++;
	}
	if (zeros > 1)
		return (0);
	if (duplicates(av))
		return (0);
	return (1);
}

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}
