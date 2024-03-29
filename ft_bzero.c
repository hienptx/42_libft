/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:47:00 by hipham            #+#    #+#             */
/*   Updated: 2023/10/21 19:18:00 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
**/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
        return ;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
