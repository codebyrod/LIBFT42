/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 01:41:52 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/14 21:10:49 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int		i;
	int		number;
	int		signal;

	number = 0;
	i = 0;
	signal = 1;
	while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			signal = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * signal);
}
