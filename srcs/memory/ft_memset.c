/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:48:15 by zvan-de-          #+#    #+#             */
<<<<<<< HEAD:srcs/memory/ft_memset.c
/*   Updated: 2023/04/13 18:00:49 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:53:19 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_memset.c
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
