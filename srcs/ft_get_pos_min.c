/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pos_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:06:59 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:26:50 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_pos_min(t_pile p)
{
	int		min;
	int		r;
	int		i;

	i = 0;
	min = p.p[0].v;
	r = 0;
	while (i < p.s)
	{
		if (p.p[i].v < min)
		{
			min = p.p[i].v;
			r = i;
		}
		i++;
	}
	return (r);
}
