/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:09:17 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/24 12:06:11 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include "ft_calloc.c"
// #include "ft_strchr.c"
// #include "ft_strdup.c"

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		start;
	int		end;

	if (!set || !s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}	

// int main()
// {
// 	char s[] = "  123  ;
// 	char s1[] = "  ";

// 	printf("%s", ft_strtrim(s, s1));
// }
