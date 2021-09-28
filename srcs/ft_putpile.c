/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:55:58 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:30:56 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	snb(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putpile(t_pile a, t_pile b)
{
	int		i;
	int		w;

	i = 0;
	while (a.s || b.s)
	{
		w = 20;
		if (a.s)
		{
			ft_putnbr(a.p[i].l);
			ft_putchar('.');
			ft_putnbr(a.p[i].v);
			w -= snb(a.p[i].v);
			w -= snb(a.p[i].l);
			a.s--;
		}
		write (1, "                    ", w);
		if (b.s)
		{
			ft_putnbr(b.p[i].l);
			ft_putchar('.');
			ft_putnbr(b.p[i].v);
			b.s--;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}
