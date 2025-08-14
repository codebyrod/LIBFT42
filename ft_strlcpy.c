/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:47:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/13 22:55:20 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (((char *)src)[i] == '\0')
	{
		((char *)dst)[i] = '\0';
		return (i);
	}
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (j < size - 1 && src[j] != '\0')
	{
		(((char *)dst)[j]) = (((char *)src)[j]);
		j++;
	}
	(((char *)dst)[j]) = '\0';
	return (i);
}
