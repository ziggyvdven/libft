/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:18:45 by zvandeven         #+#    #+#             */
<<<<<<< HEAD:srcs/string/ft_strrchr.c
/*   Updated: 2023/04/13 18:01:38 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:49:37 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_strrchr.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (0);
	while (*str != '\0')
	{
	str++;
	i++;
	}	
	while (*str != (char)c && i != 0)
	{
		str--;
		i--;
	}
	if (i == 0 && *str != (char)c)
		return (NULL);
	return (str);
}
