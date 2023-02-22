/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:08:36 by zvan-de-          #+#    #+#             */
/*   Updated: 2023/02/22 15:37:52 by zvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_lstnew.c"
// #include "ft_lstadd_back.c"
// #include "ft_lstclear.c"
// #include "ft_lstdelone.c"
// #include "ft_strlen.c"
// #include "ft_strdup.c"
// #include "ft_lstadd_front.c"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	ptr = NULL;
	while (lst != NULL)
	{
		if (ptr == NULL)
			ptr = ft_lstnew((*f)(lst->content));
		else
		{
		new_node = ft_lstnew((*f)(lst->content));
			if (!new_node)
			{
				ft_lstclear(&ptr, del);
				return (NULL);
			}
			ft_lstadd_back(&ptr, new_node);
		}
		lst = lst->next;
	}
	return (ptr);
}

// void	*toupper1(void *content)
// {
// 	int		i;
// 	char	*str;
// 	char	*new_str;

// 	str = (char *)content;
// 	new_str = ft_strdup(str);
// 	i = 0;
// 	while (i < strlen(new_str))
// 	{
// 		if (new_str[i] >= 97 && new_str[i] <= 122)
// 			new_str[i] -= 32;
// 		i++;
// 	}	
// 	return (new_str);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_lst;

// 	char s1[] = "hello";
// 	char s2[] = "there";
// 	char s3[] = "general kenobi";

// 	lst = ft_lstnew(s1);
// 	ft_lstadd_back(&lst, ft_lstnew(s2));
// 	ft_lstadd_front(&lst, ft_lstnew(s3));

// 	new_lst = ft_lstmap(lst, &toupper1, &del);

// 	while (lst)
// 	{
// 		printf("%s ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");

// 	while (new_lst)
// 	{
// 		printf("%s ", (char *)new_lst->content);
// 		new_lst = new_lst->next;
// 	}
// 	printf("\n");

// 	ft_lstclear(&lst, &del);
// 	ft_lstclear(&new_lst, &del);
// 	return (0);
// }
