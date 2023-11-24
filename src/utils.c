/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:29:09 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 09:02:16 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

long int	ft_atoi(const char *nptr)
{
	long	nb;
	int		i;
	int		sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (((9 <= nptr[i]) && (nptr[i] <= 13)) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = 1;
		i++;
	}
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (nptr[i] - 48);
		i++;
	}
	if (sign == 1)
		nb = -nb;
	return (nb);
}
