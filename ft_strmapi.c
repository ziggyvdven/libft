/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvandeven <zvandeven@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:20:09 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/19 21:57:13 by zvandeven        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_calloc.c"
#include "ft_strlen.c"

char test_toupper(unsigned int i, char str)
{
	(void)i;
	if (str >= 97 && str <= 122)
		str -= 32;
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!(ptr))
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char str[10] = "hi there!";;
 	printf("%s\n", ft_strmapi(str, test_toupper));
 	return 0;
}
