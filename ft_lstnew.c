/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:26:10 by hipham            #+#    #+#             */
/*   Updated: 2023/10/30 15:17:18 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*firstnode;

	firstnode = (t_list *)malloc(sizeof(t_list));
	if (firstnode == NULL)
		return (NULL);
	firstnode->content = content;
	firstnode->next = NULL;
	return (firstnode);
}

// int	main(void)
// {
// 	char	*str;
// 	t_list	*begin;

// 	str = "this is linked list";
// 	begin = ft_lstnew(str);
// 	while (begin != NULL)
//     {
//         printf("%s", begin->content);
//         begin = begin->next;
//     }
// }
