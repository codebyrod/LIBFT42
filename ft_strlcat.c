/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:45:01 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/09 20:53:24 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	newstr_len;
	i = 0;
	j = 0;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	newstr_len = dst_len + src_len;
	// printf("id: 0 destino: %s \n", dst);
	while (dst[i] != '\0')
		i++;
	/* while (src[j] != '\0')
		j++; */

	// printf("id: 1 resultado i: %d \n", i);
	ft_strlcpy(((char *)dst + i), src, (size - i));
	// printf("id: 3 origem: %s \n", src);
	// printf("id: 4 destino: %s \n", dst);
	return (newstr_len);
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