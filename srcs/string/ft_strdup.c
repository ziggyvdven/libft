/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:41:04 by zvandeven         #+#    #+#             */
<<<<<<< HEAD:srcs/string/ft_strdup.c
/*   Updated: 2023/05/19 14:18:03 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:52:22 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_strdup.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;
	int		i;
	char	*ptr;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	ptr = (char *)s;
	while (ptr[len] != '\0')
	len++;
	dest = (char *)malloc(len + 1);
	if (!(dest))
		return (NULL);
	while (ptr[i] != '\0' && ptr[i] != '\n')
	{
		dest[i] = ptr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
