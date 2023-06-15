/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:49:45 by zvan-de-          #+#    #+#             */
<<<<<<< HEAD:srcs/list/ft_lstadd_back.c
/*   Updated: 2023/06/15 12:35:00 by zvan-de-         ###   ########.fr       */
=======
/*   Updated: 2023/03/09 15:55:59 by zvan-de-         ###   ########.fr       */
>>>>>>> a907673c3d79054fd5e3021d0c85cbd09693d03b:ft_lstadd_back_bonus.c
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst)
		return ;
	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			ptr = *lst;
			while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		}
	}
}
