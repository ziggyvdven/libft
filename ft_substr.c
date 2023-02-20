/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvandeven <zvandeven@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:55:13 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/20 10:42:31 by zvandeven        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!(ptr))
		return (NULL);
	while (len--)
	{
		ptr[i] = s[i + start];
		i++;
	}
	return (ptr);
}
