/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:18:45 by zvandeven         #+#    #+#             */
<<<<<<< HEAD:srcs/string/ft_strchr.c
/*   Updated: 2023/04/13 18:00:57 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:52:40 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_strchr.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
