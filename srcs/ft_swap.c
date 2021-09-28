/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:13:41 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:33:20 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_swap(t_pile *p)
{
	t_element	tmp;

	if (p->s < 2)
		return ;
	tmp = p->p[0];
	p->p[0] = p->p[1];
	p->p[1] = tmp;
}

void	ft_sa(t_pile *p)
{
	ft_swap(p);
	ft_putstr("sa\n");
}

void	ft_sb(t_pile *p)
{
	ft_swap(p);
	ft_putstr("sb\n");
}

void	ft_ss(t_pile *a, t_pile *b)
{
	ft_swap(a);
	ft_swap(b);
	ft_putstr("ss\n");
}
