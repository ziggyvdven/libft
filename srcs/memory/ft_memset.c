/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:48:15 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/06/15 13:00:25 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	if (!b)
		return (NULL);
	while (i < len)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (b);
}
