/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:04:43 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:30:18 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_push_it(t_pile *p, t_element x)
{
	int		i;

	i = p->s;
	while (i)
	{
		p->p[i] = p->p[i - 1];
		i--;
	}
	p->p[0] = x;
	p->s += 1;
}

static void	ft_push(t_pile *a, t_pile *b, int x)
{
	if (x == 0)
	{
		if (!b->s)
			return ;
		ft_push_it(a, b->p[0]);
		*b = ft_plusun(*b);
		b->s -= 1;
	}
	else if (x == 1)
	{
		if (!a->s)
			return ;
		ft_push_it(b, a->p[0]);
		*a = ft_plusun(*a);
		a->s -= 1;
	}
}

void	ft_pa(t_pile *a, t_pile *b)
{
	ft_push(a, b, 0);
	ft_putstr("pa\n");
}

void	ft_pb(t_pile *a, t_pile *b)
{
	ft_push(a, b, 1);
	ft_putstr("pb\n");
}
