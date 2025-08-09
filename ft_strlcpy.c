/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:47:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:48:13 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (j < (size - 1))
	{
		(((char *)dst)[j]) = (((char *)src)[j]);
		printf("id: %d, %s \n id: %d, %s\n", j, dst, j, src);
		j++;
	}
	(((char *)dst)[i]) = '\0';
	return (i);
}

/* int main() {
    char dest[5];
    const char *src = "Rodrigo";
    size_t size = sizeof(dest);

    // size_t copied = strlcpy(dest, src, size);
    size_t copied = ft_strlcpy(dest, src, size);

    printf("Origem: %s\n", src);
    printf("Destino: %s\n", dest);
    printf("Tamanho retornado: %zu\n", copied);

    return 0;
} */