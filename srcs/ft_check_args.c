/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:31:05 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:21:37 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_args(int ac, char **av)
{
	int		i;
	int		j;
	int		r;

	i = 1;
	r = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			while (ft_is_space(av[i][j]))
				j++;
			if (av[i][j])
			{
				if (!ft_is_num(av[i], &j))
					return (0);
				r++;
			}
		}
		i++;
	}
	return (r);
}
