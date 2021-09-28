/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:04:45 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:36:59 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	small_sort(t_pile a, t_pile b)
{
	if (a.s == 1)
	{
		return ;
	}
	if (a.s == 2)
	{
		ft_putstr("sa\n");
		return ;
	}
	while (a.s > 3)
	{
		ft_min_to_summit(&a);
		ft_pb(&a, &b);
	}
	ft_sort3num(&a);
	while (b.s)
		ft_pa(&a, &b);
}

static void	main4(t_obj o)
{
	int		i;

	i = 0;
	o.op = ft_init_op();
	while (o.b.p[i].l != o.b.s - 1)
		i++;
	if (i < o.b.s / 2)
		o.op.rb = i;
	else
		o.op.rrb = o.b.s - i;
	while (o.op.rb)
	{
		ft_rb(&o.b);
		o.op.rb--;
	}
	while (o.op.rrb)
	{
		ft_rrb(&o.b);
		o.op.rrb--;
	}
	while (o.os)
	{
		ft_pa(&o.a, &o.b);
		o.os--;
	}
}

static void	main3(t_obj o)
{
	o.os = o.a.s;
	if (o.os <= 100)
		o.cs = o.os / 5;
	else
		o.cs = o.os / 11;
	o.ic = 1;
	o = ft_first_p(o);
	while (o.b.s < o.os)
	{
		while (o.b.s < (o.ic * o.cs) + 1)
		{
			if (o.b.s == o.os)
			{
				main4(o);
				return ;
			}
			o.op = ft_init_op();
			o.op = ft_count_op(o);
			o = ft_do_op(o);
		}
		o.ic++;
	}
	main4(o);
}

static void	main2(t_obj o)
{
	if (ft_is_sort(o.a))
	{
		return ;
	}
	if (o.a.s < 6)
		small_sort(o.a, o.b);
	else
		main3(o);
}

int	main(int ac, char **av)
{
	t_obj	o;

	if (ac <= 1)
	{
		return (1);
	}
	o.a.s = ft_check_args(ac, av);
	if (!o.a.s)
		return (ft_error(0, NULL, NULL));
	o.a.p = malloc(sizeof(t_element) * o.a.s);
	if (!o.a.p)
		return (ft_error(0, NULL, NULL));
	if (!ft_get_args(ac, av, &o.a) || !ft_checkdouble(o.a))
		return (ft_error(1, o.a.p, NULL));
	o.b.p = malloc(sizeof(t_element) * o.a.s);
	if (!o.b.p)
		return (ft_error(1, o.a.p, NULL));
	o.b.s = 0;
	if (!ft_get_loc(&o.a))
		return (ft_error(2, o.a.p, o.b.p));
	main2(o);
	free(o.a.p);
	free(o.b.p);
	return (1);
}
