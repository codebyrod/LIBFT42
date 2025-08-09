/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:10:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/09 20:52:41 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((unsigned char *)str + i);
		i++;
	}
	return (NULL);
}

/* int main()
{
    char data[] = "Rodrigo";
    int c;
    c = 114;
    size_t n;
    n = 4;
    void *ptr = ft_memchr(data, c, n);
    printf("Saída: %s\n", (char *)ptr);
    
    return (0);
} */