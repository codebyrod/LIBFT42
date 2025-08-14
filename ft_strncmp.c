/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:42:58 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/13 22:41:09 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	int				a;
	int				b;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
		{
			a = ((int)(((unsigned char *)str1)[i]));
			b = ((int)(((unsigned char *)str2)[i]));
			return (a - b);
		}
		i++;
	}
	return (0);
}
