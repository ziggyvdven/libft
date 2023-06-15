/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:40:53 by zvan-de-          #+#    #+#             */
<<<<<<< HEAD:srcs/string/ft_strlen.c
/*   Updated: 2023/04/13 18:01:22 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:46:32 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_strlen.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
