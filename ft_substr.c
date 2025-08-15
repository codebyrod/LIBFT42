/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 12:44:17 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/15 19:37:42 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*new_str;
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (!str || start > str_len)
	{
		new_str = ft_strdup("");
		return (new_str);
	}
	if(len > str_len - start)
		len = str_len - start;
	new_str = ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < len  && str[start] != '\0')
	{
		new_str[i] = str[start];
		i++;
		start++;
	}
	return (new_str);
}
// int main(void)
// {
//     const char *str_original = "Ola mundo, C e incrivel!";
//     char *result_ft;

//     printf("String original: \"%s\"\n", str_original);
//     printf("========================================================\n");

//     // --- Cenário 1: Teste Normal ---
//     unsigned int start1 = 4;
//     size_t len1 = 5;
//     printf("Teste 1: start=%u, len=%zu\n", start1, len1);
//     printf("   -> Resultado Esperado: \"mundo\"\n");

//     result_ft = ft_substr(str_original, start1, len1);
//     printf("   -> Seu Resultado....: \"%s\"\n", result_ft);

//     // IMPORTANTE: Sempre libere a memória que sua função alocou!
//     free(result_ft);
//     printf("--------------------------------------------------------\n");

    
//     // --- Cenário 2: Teste com 'start' fora da string ---
//     unsigned int start2 = 100;
//     size_t len2 = 5;
//     printf("Teste 2: start=%u (fora da string), len=%zu\n", start2, len2);
//     printf("   -> Resultado Esperado: \"\" (uma string vazia)\n");

//     result_ft = ft_substr(str_original, start2, len2);
//     printf("   -> Seu Resultado....: \"%s\"\n", result_ft);

//     free(result_ft);
//     printf("--------------------------------------------------------\n");


//     // --- Cenário 3: Teste com 'len' maior que o restante da string ---
//     unsigned int start3 = 11;
//     size_t len3 = 500;
//     printf("Teste 3: start=%u, len=%zu (maior que o disponivel)\n", start3, len3);
//     printf("   -> Resultado Esperado: \"C e incrivel!\"\n");
    
//     result_ft = ft_substr(str_original, start3, len3);
//     printf("   -> Seu Resultado....: \"%s\"\n", result_ft);

//     free(result_ft);
//     printf("========================================================\n");

//     return (0);
// 