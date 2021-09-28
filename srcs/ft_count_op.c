/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:45:48 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:22:44 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_get_pos(t_obj o)
{
	int		i;

	i = 0;
	while (i < o.b.s)
	{
		if (o.b.p[i].l > o.op.ltm && o.b.p[i + 1].l < o.op.ltm)
			return (i);
		i++;
	}
	return (0);
}

static t_op	ft_count_op3(t_obj o)
{
	while (o.op.ra && o.op.rb)
	{
		o.op.ra --;
		o.op.rb --;
		o.op.rr ++;
	}
	while (o.op.rra && o.op.rrb)
	{
		o.op.rra --;
		o.op.rrb --;
		o.op.rrr ++;
	}
	return (o.op);
}

static t_op	ft_count_op2(t_obj o)
{
	int		p;

	p = ft_get_pos(o);
	if (p < o.b.s / 2)
		o.op.rb = p + 1;
	else
		o.op.rrb = o.b.s - (p + 1);
	return (ft_count_op3(o));
}

t_op	ft_count_op(t_obj o)
{
	int		i;
	int		j[2];

	i = 0;
	j[0] = o.a.s - 1;
	j[1] = 1;
	while (o.a.p[i].l > o.cs * o.ic)
		i++;
	while (j[0] >= 0 && o.a.p[j[0]].l > o.cs)
	{
		j[0]--;
		j[1]++;
	}
	if (i < j[1])
	{
		o.op.ra = i;
		o.op.ltm = o.a.p[i].l;
	}
	else
	{
		o.op.rra = j[1];
		o.op.ltm = o.a.p[j[0]].l;
	}
	return (ft_count_op2(o));
}
