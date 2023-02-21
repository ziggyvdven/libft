/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:09:17 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/21 14:45:13 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include "ft_strrchr.c"
// #include "ft_calloc.c"
// #include "ft_strchr.c"
// #include "ft_strdup.c"
// #include "ft_strlcpy.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	int				start;
	int				end;
	char			*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!set || !s1)
		return (NULL);
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = (char *)ft_calloc(sizeof(char), end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

// int main()
// {
// 	char s[] = "  123  ;
// 	char s1[] = "  ";

// 	printf("%s", ft_strtrim(s, s1));
// }
