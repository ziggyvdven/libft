/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:09:17 by zvan-de-          #+#    #+#             */
<<<<<<< HEAD:srcs/string/ft_strtrim.c
/*   Updated: 2023/04/13 18:01:42 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/02/24 12:06:11 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_strtrim.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
