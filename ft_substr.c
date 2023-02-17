/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:55:13 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/17 16:42:55 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = (char *)calloc(sizeof(char), (len + 1));
	if (!(ptr))
		return (NULL);
	while (len--)
	{
		ptr[i] = s[i + start];
		i++;
	}
	return (ptr);
}
