/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:04:01 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/24 07:56:27 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_final(t_stack *src, int i)
{
	int	k;

	k = 0;
	while (src)
	{
		if (i > src->value)
			k++;
		src = src->next;
	}
	return (k);
}

int	bit_number(t_stack *src)
{
	int	i;
	int	x;

	x = (get_stack_size(src) - 1);
	i = 0;
	while (x)
	{
		x = x / 2;
		i++;
	}
	return (i);
}

void	radix(t_stack *src, t_stack *dest, t_stack *cpy)
{
	int	x;
	int	i;
	int	j;
	int	len;

	len = get_stack_size(src);
	i = 0;
	x = bit_number(src);
	while (i < x)
	{
		j = 0;
		while (j < len)
		{
			if (index_final(cpy, src->value) >> i & 1)
				ra(&src);
			else
				pb(&src, &dest);
			j++;
		}
		while (dest)
			pa(&src, &dest);
		i++;
	}
}
