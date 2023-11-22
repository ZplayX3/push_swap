/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:41:05 by tlachman          #+#    #+#             */
/*   Updated: 2023/11/22 10:41:07 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int is_sign (char c)
{
    return (c == '+' || c == '-');
}

int nb_cmp(consst char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = i;
    if(s1[i] == '+')
    {
        if (s2[j] != '+')
            i++;
    }
    else
    {
        if (s2[j] == '+')
            j++;
    }
    while (s1[i] != '\0' && s2[j] !='\0' && s1[i] == s2[j])
    {
        i++;
        j++;     
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}
