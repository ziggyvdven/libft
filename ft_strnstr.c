/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:01:09 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/17 16:36:42 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned 	i;
	unsigned	j;
	
	i = 0;
	// if ((size_t)ft_strlen(haystack) < len)
	// 	return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (!(needle[j]))
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char	haystack[] = "aaab";
// 	char	needle[] = "abcd";
// 	int	len = 9;

// 	if(ft_strnstr(haystack, needle, len))
// 	{
//  	printf("Found %s at starting adress: %p\n", 
//  	needle, ft_strnstr(haystack, needle, len));
// 	}

// 	if (!(ft_strnstr(haystack, needle, len)))
// 	{
// 		printf("can't find %s in: %s\n", needle, haystack);
// 	}
// 	printf("strstr output = %p\n", strnstr(haystack, needle, len));
// }
