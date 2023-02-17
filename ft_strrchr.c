/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:18:45 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/15 16:40:28 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
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
