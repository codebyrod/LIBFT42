/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:59:31 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/20 19:09:45 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	size_t	count;
	long	num;

	count = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = num * (-1);
		count++;
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	count;
	char	*new_str;

	num = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count_digit(n);
	new_str = (char *)ft_calloc(count + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	num = n;
	if (num < 0)
	{
		new_str[0] = '-';
		num = num * (-1);
	}
	while (num > 0)
	{
		new_str[--count] = (num % 10) + '0';
		num = num / 10;
	}
	return (new_str);
}
