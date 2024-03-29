/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:31:04 by hipham            #+#    #+#             */
/*   Updated: 2023/10/24 15:49:17 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** 
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory.  The allocated memory is filled with bytes of value zero.
**/	     
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
