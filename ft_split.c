/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:30:19 by hipham            #+#    #+#             */
/*   Updated: 2023/10/27 21:35:39 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char const *s, char c)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (counter);
}

static void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static size_t	strlength(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static int	cpystr(char **output, char **s, char c)
{
	size_t	wordlen;

	while (**s == c)
		(*s)++;
	wordlen = strlength(*s, c);
	*output = malloc((wordlen + 1) * sizeof(char));
	if (*output == NULL)
		return (0);
	ft_memcpy(*output, *s, wordlen);
	(*output)[wordlen] = '\0';
	*s += wordlen;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	*pos;
	char	**output;
	size_t	id;
	size_t	nr_word;

	nr_word = countword(s, c);
	id = 0;
	pos = (char *)s;
	output = (char **)malloc((nr_word + 1) * sizeof(char *));
	if (output == NULL)
		return (NULL);
	while (id < nr_word)
	{
		if (!cpystr(&output[id], &pos, c))
		{
			ft_free(output);
			return (NULL);
		}
		id++;
	}
	output[id] = NULL;
	return (output);
}

// int	main(void)
// {
// 	char *str = "   lorem   ipsum dolor     sit amet,
// 		consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
// 	int i = 0;
// 	char **res = ft_split(str, ' ');
// 	while (res[i] != NULL)
// 		printf("%s\n", res[i++]);
// 	return (0);
// }