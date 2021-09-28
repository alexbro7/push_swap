/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:32:25 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:11:44 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_obj	ft_do_op2(t_obj o)
{
	while (o.op.rrr)
	{
		ft_rrr(&o.a, &o.b);
		o.op.rrr--;
	}
	while (o.op.rra)
	{
		ft_rra(&o.a);
		o.op.rra--;
	}
	while (o.op.rrb)
	{
		ft_rrb(&o.b);
		o.op.rrb--;
	}
	ft_pb(&o.a, &o.b);
	return (o);
}

t_obj	ft_do_op(t_obj o)
{
	while (o.op.rr)
	{
		ft_rr(&o.a, &o.b);
		o.op.rr--;
	}
	while (o.op.ra)
	{
		ft_ra(&o.a);
		o.op.ra--;
	}
	while (o.op.rb)
	{
		ft_rb(&o.b);
		o.op.rb--;
	}
	return (ft_do_op2(o));
}
