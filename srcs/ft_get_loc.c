/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_loc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:03:44 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:27:21 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_pile	ft_easysort(t_pile a)
{
	int		tmp;
	int		i;
	int		j;

	tmp = 0;
	i = 0;
	j = 0;
	while (i < a.s)
	{
		j = i;
		while (j < a.s)
		{
			if (a.p[i].v > a.p[j].v)
			{
				tmp = a.p[i].v;
				a.p[i].v = a.p[j].v;
				a.p[j].v = tmp;
			}
			j++;
		}
		i++;
	}
	return (a);
}

static t_pile	ft_get_loc2(t_pile d, t_pile s)
{
	int		i;
	int		j;

	i = 0;
	while (i < s.s)
	{
		j = 0;
		while (d.p[i].v != s.p[j].v)
			j++;
		d.p[i].l = s.p[j].l;
		i++;
	}
	return (d);
}

int	ft_get_loc(t_pile *a)
{
	t_pile	c;
	int		i;

	i = 0;
	c.p = malloc(sizeof(t_element) * a->s);
	if (c.p == NULL)
		return (0);
	while (i < a->s)
	{
		c.p[i] = a->p[i];
		i++;
	}
	c.s = a->s;
	c = ft_easysort(c);
	i = 0;
	while (i < c.s)
	{
		c.p[i].l = i;
		i++;
	}
	*a = ft_get_loc2(*a, c);
	free(c.p);
	return (1);
}
