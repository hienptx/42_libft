/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:21:25 by hipham            #+#    #+#             */
/*   Updated: 2023/10/26 21:23:36 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*output;

	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[start]) != NULL && start <= end)
		start++;
	while (ft_strchr(set, s1[end]) != NULL && end >= start)
		end--;
	if (start > end)
		return (ft_strdup(""));
	output = ft_substr(s1, start, (end - start + 1));
	if (output == NULL)
		return (NULL);
	output[end - start + 1] = '\0';
	return (output);
}

// int	main(void)
// {
// 	char	str[] = "teusttestestest is test is testui";
// 	char	set[] = "t e s a";
// 	char	set1[] = "tua";
// 	char	set2[] = "is";
// 	char	set3[] = "";

// 	printf("SET =%s\n", ft_strtrim(str, set));
// 	printf("SET 1 =%s\n", ft_strtrim(str, set1));
// 	printf("SET 2 =%s\n", ft_strtrim(str, set2));
// 	printf("SET 3 = %s\n", ft_strtrim(str, set3));
// }
