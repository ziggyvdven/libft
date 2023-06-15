/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:22:46 by zvandeven         #+#    #+#             */
<<<<<<< HEAD:srcs/utils/ft_calloc.c
/*   Updated: 2023/04/13 18:02:09 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:56:56 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_calloc.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*ptr;
	size_t		i;

	i = 0;
	if (nmemb >= SIZE_MAX || size >= SIZE_MAX)
		return (0);
	ptr = (char *)malloc(nmemb * size);
	if (!(ptr))
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
