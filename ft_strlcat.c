/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:45:01 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/13 22:35:38 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;
	unsigned int	src_len;

	j = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len <= size - 1)
		dst_len++;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len + 0);
	if (size <= dst_len)
		return (src_len + size);
	i = dst_len;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
