/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:04:31 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:12:15 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_obj	ft_first_p(t_obj o)
{
	int		i;

	i = 0;
	o.op = ft_init_op();
	while (i < o.a.s && o.a.p[i].l != 0)
		i++;
	if (i < o.a.s / 2)
		o.op.ra = i;
	else
		o.op.rra = o.a.s - i;
	o = ft_do_op(o);
	i = 0;
	o.op = ft_init_op();
	while (i < o.a.s && o.a.p[i].l != o.a.s)
		i++;
	if (i < o.a.s / 2)
		o.op.ra = i;
	else
		o.op.rra = o.a.s - i;
	o = ft_do_op(o);
	return (o);
}
