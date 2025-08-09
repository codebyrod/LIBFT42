/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:47:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/09 20:55:11 by rosousa-         ###   ########.fr       */
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
		return i;
	}
	while (src[i])
		i++;
	if(size == 0)
		return i;
	while (j < size - 1 && src[j] != '\0')
	{
		(((char *)dst)[j]) = (((char *)src)[j]);
		// printf("id: %d, %s \n id: %d, %s\n", j, dst, j, src);
		j++;
	}
	(((char *)dst)[j]) = '\0';
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

/* 
int main(void)
{
    // Crie um buffer de destino com conteúdo conhecido para ver as mudanças
    char dest_buffer[15] = "rrrrrrrrrrrrrrr";

    // --- Teste 2: Cópia de string vazia ---
    printf("--- Teste 2: Cópia de string vazia ---\n");
    printf("Expected return value: %zu\n", strlcpy(dest_buffer, "", 15));
    printf("Your return value:     %zu\n", ft_strlcpy(dest_buffer, "", 15));
    printf("Dest content:          ");
    write(1, dest_buffer, 15);
    write(1, "\n", 1);
    
    // Resetando o buffer para o próximo teste
    // memset(dest_buffer, 'r', 15);

    // --- Teste 3: Cópia parcial de string ---
    printf("\n--- Teste 3: Cópia parcial (size=3) ---\n");
    char *src3 = "lorem ipsum";
    printf("Expected return value: %zu\n", strlcpy(dest_buffer, src3, 3));
    printf("Your return value:     %zu\n", ft_strlcpy(dest_buffer, src3, 3));
    printf("Dest content:          ");
    write(1, dest_buffer, 15);
    write(1, "\n", 1);

    // Resetando o buffer para o próximo teste
    // memset(dest_buffer, 'r', 15);

    // --- Teste 5: Cópia com size=0 ---
    printf("\n--- Teste 5: Cópia com size=0 ---\n");
    char *src5 = "lorem ipsum dolor sit amet";
    printf("Expected return value: %zu\n", strlcpy(dest_buffer, src5, 0));
    printf("Your return value:     %zu\n", ft_strlcpy(dest_buffer, src5, 0));
    printf("Dest content:          ");
    write(1, dest_buffer, 15);
    write(1, "\n", 1); 

    return 0;
}
*/
