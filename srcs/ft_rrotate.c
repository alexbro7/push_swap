/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:04 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:31:32 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_rrotate(t_pile *p)
{
	t_element	tmp;
	int			i;

	if (p->s < 2)
		return ;
	i = p->s - 1;
	tmp = p->p[i];
	while (i)
	{
		p->p[i] = p->p[i - 1];
		i--;
	}
	p->p[i] = tmp;
}

void	ft_rra(t_pile *p)
{
	ft_rrotate(p);
	ft_putstr("rra\n");
}

void	ft_rrb(t_pile *p)
{
	ft_rrotate(p);
	ft_putstr("rrb\n");
}

void	ft_rrr(t_pile *a, t_pile *b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	ft_putstr("rrr\n");
}
