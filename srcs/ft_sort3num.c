/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:18:07 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:32:49 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort3num(t_pile *a)
{
	if (a->p[0].v > a->p[1].v && a->p[1].v < a->p[2].v && a->p[2].v > a->p[0].v)
		ft_sa(a);
	else if (a->p[0].v > a->p[1].v && a->p[1].v > a->p[2].v
		&& a->p[2].v < a->p[0].v)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (a->p[0].v > a->p[1].v && a->p[1].v < a->p[2].v
		&& a->p[2].v < a->p[0].v)
		ft_ra(a);
	else if (a->p[0].v < a->p[1].v && a->p[1].v > a->p[2].v
		&& a->p[2].v > a->p[0].v)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (a->p[0].v < a->p[1].v && a->p[1].v > a->p[2].v
		&& a->p[2].v < a->p[0].v)
		ft_rra(a);
}
