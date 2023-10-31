/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:11:04 by hipham            #+#    #+#             */
/*   Updated: 2023/10/24 17:36:50 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	j = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (j < len)
	{
		ptr[j] = s[start];
		j++;
		start++;
	}
	ptr[j] = '\0';
	return (ptr);
}
