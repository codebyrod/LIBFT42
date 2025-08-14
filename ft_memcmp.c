/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:21:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/13 22:39:41 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned int		i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (i < num)
	{
		if ((s1[i]) > (s2[i]))
		{
			return ((int)(s1[i]) - (int)(s2[i]));
		}
		else if (((int)s1[i]) < ((int)(s2[i])))
		{
			return ((int)((s1[i])) - (int)(s2[i]));
		}
		i++;
	}
	return (0);
}
