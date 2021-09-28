/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_to_summit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:06:40 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:29:46 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_min_to_summit(t_pile *a)
{
	int		p;

	p = ft_get_pos_min(*a);
	if (p <= a->s / 2)
	{
		while (p)
		{
			ft_ra(a);
			p--;
		}
	}
	else
	{
		while (p < a->s)
		{
			ft_rra(a);
			p++;
		}
	}
}
