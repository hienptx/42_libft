/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:59:29 by hipham            #+#    #+#             */
/*   Updated: 2023/10/23 19:08:39 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	size_t	i;

	pdst = (char *)dst;
	i = 0;
	if ((dst == NULL && src == NULL) || len == 0)
		return (dst);
	if (dst > src)
	{
		while (len-- > 0)
		{
			pdst[len] = ((char *)src)[len];
		}
	}
	else
	{
		while (i < len)
		{
			pdst[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
