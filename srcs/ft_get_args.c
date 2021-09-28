/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:43:06 by alebross          #+#    #+#             */
/*   Updated: 2021/09/28 17:06:33 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_args(int ac, char **av, t_pile *a)
{
	int			i;
	int			j;
	int			k;
	long int	l;

	i = 1;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			l = ft_atoi(av[i], &j);
			if (l < -2147483647 || l > 2147483648)
				return (0);
			a->p[k].v = (int)l;
			k++;
			while (ft_is_space (av[i][j]))
				j++;
		}
		i++;
	}
	return (1);
}
