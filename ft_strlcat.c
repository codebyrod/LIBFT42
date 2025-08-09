/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:45:01 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:46:27 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t strlcpy(char *dst, const char *src, size_t size);

// size_t strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	printf("id: 0 destino: %s \n", dst);
	while (dst[i] != '\0')
		i++;
	printf("id: 1 resultado i: %d \n", i);
	ft_strlcpy(((char *)dst + i), src, (size - i));
	printf("id: 3 origem: %s \n", src);
	printf("id: 4 destino: %s \n", dst);
	return (ft_strlen(dst));
}

/* int main()
{
    char dest[20] = "Hello, ";
    char *src = "world!";
    // size_t result = strlcat(dest, src, sizeof(dest));
    
    // printf("Resultado: %s\n", dest);
    // printf("Tamanho retornado: %zu\n", result);
    
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("id: 5 Resultado: %s\n", dest);
    printf("id: 6 Tamanho retornado: %zu\n", result);

    return (0);
} */