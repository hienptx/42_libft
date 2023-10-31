/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:04:46 by hipham            #+#    #+#             */
/*   Updated: 2023/10/23 16:23:19 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	j;
	size_t	lendst;
	size_t	result;
	char	*psrc;

	j = 0;
	psrc = (char *)src;
	lendst = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		result = (ft_strlen(src) + dstsize);
	else
		result = (ft_strlen(dst) + ft_strlen(src));
	while (psrc[j] != '\0' && lendst + 1 < dstsize)
	{
		dst[lendst] = psrc[j];
		j++;
		lendst++;
	}
	dst[lendst] = '\0';
	return (result);
}
