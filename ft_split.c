/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvandeven <zvandeven@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:15:28 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/20 14:32:42 by zvandeven        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_calloc.c"

int	ft_strcount(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == c || str[i + 1] == '\0')
			&& !(str[i] == c || str[i] == '\0'))
			count++;
		i++;
	}
	return (count);

}

char	*ft_strmake(char const *s, unsigned int start, unsigned int end)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)ft_calloc(sizeof(char), ((end - start) + 1));
	if (!(str))
		return (0);
	while (start < end && s)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}


char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	char			**ptr;
	unsigned int	count;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	start = 0;
	count = ft_strcount(s, c);
	ptr = (char **)ft_calloc(sizeof(char *), count + 1);
	if (!(ptr))
		return (NULL);
	while (i < count)
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c)
			end++;
		ptr[i] = ft_strmake(s, start, end);
		i++;
		start = end;
	}
	ptr[i] = NULL;
	return (ptr);
}

// int	main(void)
// {
// 	char	*str = "hello there, general kenobi";
// 	char	**arr;
// 	char	sep = ' ';
// 	int		i;

// 	arr = ft_split(str, sep);
// 	if (arr == NULL)
// 	{
// 		printf("Error: ft_split returned NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (arr[i] != NULL)
// 	{
// 		printf("%s\n", arr[i]);
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
