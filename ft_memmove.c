/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:22:48 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/09 20:53:10 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		if (src < dest)
		{
			((char *)dest)[n - 1] = ((char *)src)[n -1];
			n--;
		}
		else
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* int main()
{
    char str2[] = "XXXXXXX";
    char str1[] = "lorem ipum dolor sit a";
    size_t n;
    n = 22;

    printf("Resultado de str2 antes da fnc: %s\n", str2);
    // memmove(str2, str1, n);
    ft_memmove(str2, str1, n);
    printf("Resultado de str2 depois da fnc: %s\n", str2);
    return(0);
} */

/* int main()
{
    char s_1[] = "lorem ipsum dolor sit a";
    char s_2[] = "lorem ipsum dolor sit a";
    char s_3[] = "lorem ipsum dolor sit a";
    char s_4[] = "lorem ipsum dolor sit a";
    
    // --- Teste 3: dest está à frente de src ---
    printf("--- Teste 3 ---\n");
    printf("Original: %s\n", s_1);
    
    // A chamada ft_memmove(s_1 + 1, s_1, 8) significa
    // copiar 8 bytes a partir do início de s_1 para o endereço s_1 + 1.
    // Isso cria uma sobreposição.
    ft_memmove(s_1 + 1, s_1, 8);
    printf("Seu resultado:  %s\n", s_1);
    
    memmove(s_2 + 1, s_2, 8);
    printf("Esperado:       %s\n\n", s_2);
    
    // --- Teste 4: src está à frente de dest ---
    printf("--- Teste 4 ---\n");
    printf("Original: %s\n", s_3);
    
    // A chamada ft_memmove(s_3, s_3 + 1, 8) significa
    // copiar 8 bytes a partir do endereço s_3 + 1 para o início de s_3.
    // Isso também cria uma sobreposição.
    ft_memmove(s_3, s_3 + 1, 8);
    printf("Seu resultado:  %s\n", s_3);
    
    memmove(s_4, s_4 + 1, 8);
    printf("Esperado:       %s\n\n", s_4);

    return 0;
} */