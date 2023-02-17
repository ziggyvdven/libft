/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:03:59 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/16 14:57:59 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		mult;
	int		nb;
	char	*str;

	mult = 1;
	nb = 0;
	i = 0;
	str = (char *)nptr;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			mult *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	nb *= mult;
	return (nb);
}
