/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:54:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/14 23:47:26 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	new_len;

	i = 0;
	if (size && nmemb > (size_t)-1 / size)
		return (0);
		
	new_len = nmemb * size;
	ptr = malloc(new_len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, new_len);
	// ft_bzero(ptr, nmemb * size);
	return (ptr);
}
