/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:04:40 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:31:15 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_rotate(t_pile *p)
{
	t_element	tmp;

	if (p->s < 2)
		return ;
	tmp = p->p[0];
	*p = ft_plusun(*p);
	p->p[p->s - 1] = tmp;
}

void	ft_ra(t_pile *p)
{
	ft_rotate(p);
	ft_putstr("ra\n");
}

void	ft_rb(t_pile *p)
{
	ft_rotate(p);
	ft_putstr("rb\n");
}

void	ft_rr(t_pile *a, t_pile *b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr("rr\n");
}
