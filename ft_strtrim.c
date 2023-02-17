/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:09:17 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/17 16:55:55 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include "ft_strncmp.c"
// #include "ft_calloc.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*ptr;
	size_t		len;

	i = 0;
	start = 0;
	len = ft_strlen(set);
	end = ft_strlen(s1);
	if (!(ft_strncmp(s1, set, len)))
		start = len;
	if (!(ft_strncmp(&s1[end - len], set, len)))
		end -= len;
	ptr = (char *)ft_calloc(sizeof(char), (end - start + 1));
	if (!(ptr))
		return (NULL);
	while (start < end)
		ptr[i++] = s1[start++];
	return (ptr);
}

int main()
{
	char s[] = "orem ipsum dolor sit amet";
	char s1[] = "te";

	printf("%s", ft_strtrim(s, s1));
}
