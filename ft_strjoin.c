/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:58:20 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/17 10:09:50 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	j = 0;
	i = (ft_strlen(s1) + ft_strlen(s2));
	ptr = (char *)malloc(i);
	if (!(ptr))
		return (NULL);
	i = 0;
	while (s1[i])
		ptr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr[j++] = s2[i++];
	return (ptr);
}

// int main()
// {
// 	char s[] = "hello";
// 	char s1[] = " there";

// 	printf("%s\n", ft_strjoin(s, s1));

// }
