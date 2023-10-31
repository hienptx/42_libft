/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:03:30 by hipham            #+#    #+#             */
/*   Updated: 2023/10/24 15:55:39 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neopo;
	int	output;

	i = 0;
	neopo = 1;
	output = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neopo = -neopo;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = (str[i] - '0') + (output * 10);
		i++;
	}
	return (output * neopo);
}
