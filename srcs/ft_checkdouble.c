/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:04:57 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:11:21 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_checkdouble(t_pile a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < a.s)
	{
		j = i + 1;
		while (j < a.s)
		{
			if (a.p[i].v == a.p[j].v)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
