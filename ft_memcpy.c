/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:05:34 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/16 15:10:19 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*ptr;
	const unsigned char	*ptr1;

	i = 0;
	ptr = dst;
	ptr1 = src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*ptr = *ptr1;
		ptr++;
		ptr1++;
		i++;
	}
	return (dst);
}
