/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:00:58 by hipham            #+#    #+#             */
/*   Updated: 2023/10/31 19:15:19 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pstack;
	char	*pneedle;

	i = 0;
	pstack = (char *)haystack;
	pneedle = (char *)needle;
	if (pneedle[0] == 0)
		return ((char *)haystack);
	while (i < len && pstack[i] != 0)
	{
		j = 0;
		while (pstack[i + j] == pneedle[j] && pneedle[j] != 0 && i + j < len)
		{
			j++;
		}
		if (pneedle[j] == 0)
			return (&pstack[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n",ft_strnstr(NULL, "a", 0));
	printf("%s\n", strnstr(NULL, "a", 0));
	return (0);
}