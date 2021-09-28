/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:11:50 by alebross          #+#    #+#             */
/*   Updated: 2021/09/26 15:22:24 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_error(int a, t_element *b, t_element *c)
{
	ft_putstr("Error.\n");
	if (a)
		free(b);
	if (a == 2)
		free(c);
	return (0);
}
