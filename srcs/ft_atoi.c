/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:49:27 by alebross          #+#    #+#             */
/*   Updated: 2021/09/28 17:06:09 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long int	ft_atoi(const char *str, int *i)
{
	int			sign;
	long int	nb;

	sign = 1;
	nb = 0;
	while (str[*i] == '\n' || str[*i] == '\t' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
		*i += 1;
	if ((str[*i] == '-' || str[*i] == '+')
		&& (str[*i + 1] >= '0' && str[*i + 1] <= '9'))
	{
		if (str[*i] == '-')
			sign = -1;
		*i += 1;
	}
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		nb = 10 * nb + (str[*i] - 48);
		*i += 1;
	}
	return (nb * sign);
}
