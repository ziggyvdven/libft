/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvandeven <zvandeven@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:09:17 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/20 10:11:16 by zvandeven        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_strrchr.c"
#include "ft_calloc.c"
#include "ft_strchr.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*ptr;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[end]))
		end--;
	ptr = (char *)ft_calloc(sizeof(char), (end - start + 1));
	if (!(ptr))
		return (NULL);
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char s[] = "who you gonna call?";
	char s1[] = "hw?";

	printf("%s", ft_strtrim(s, s1));
}
