/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:14:57 by zvandeven         #+#    #+#             */
/*   Updated: 2023/02/21 10:55:34 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void ft_toupper1(unsigned int i, char *str)
// {
// 	(void) i;
// 	if (*str >= 97 && *str <= 122)
// 		*str -= 32;
// }

// int main()
// {
//  	char str[] = "hello there";
// 		ft_striteri(str, ft_toupper1);
//  	printf("%s\n", str);
//  	return 0;
// }
