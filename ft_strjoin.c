/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:35:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/15 19:41:56 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	full_size;
	char	*new_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	full_size = len_s1 + len_s2;
	new_str = ft_calloc(full_size + 1, sizeof(char));
	if(!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, len_s1);
	ft_strlcpy(new_str + len_s1, s2, len_s2 + 1);
	return (new_str);

}

// // Função principal que será executada
// int main(void)
// {
//     char *s1;
//     char *s2;
//     char *resultado_ft;

//     printf("Testando ft_strjoin:\n");
//     printf("========================================\n");

//     // --- Cenário de Teste 1: Caso Normal ---
//     s1 = "Ola, ";
//     s2 = "mundo!";
//     printf("Teste 1: Juntando \"%s\" e \"%s\"\n", s1, s2);
//     printf("   -> Resultado Esperado: \"Ola, mundo!\"\n");

//     // Chamando a sua função
//     resultado_ft = ft_strjoin(s1, s2);
    
//     // Verificando e imprimindo o seu resultado
//     printf("   -> Seu Resultado....: ");
//     if (resultado_ft != NULL)
//         printf("\"%s\"\n", resultado_ft);
//     else
//         printf("NULL\n");

//     // IMPORTANTE: Liberando a memória que sua função alocou
//     free(resultado_ft);
//     printf("----------------------------------------\n");


//     // --- Cenário de Teste 2: Primeira string vazia ---
//     s1 = "";
//     s2 = "Funciona!";
//     printf("Teste 2: Juntando string vazia e \"%s\"\n", s2);
//     printf("   -> Resultado Esperado: \"Funciona!\"\n");

//     resultado_ft = ft_strjoin(s1, s2);
    
//     printf("   -> Seu Resultado....: ");
//     if (resultado_ft != NULL)
//         printf("\"%s\"\n", resultado_ft);
//     else
//         printf("NULL\n");

//     free(resultado_ft);
//     printf("----------------------------------------\n");


//     // --- Cenário de Teste 3: Segunda string vazia ---
//     s1 = "Testando...";
//     s2 = "";
//     printf("Teste 3: Juntando \"%s\" e string vazia\n", s1);
//     printf("   -> Resultado Esperado: \"Testando...\"\n");

//     resultado_ft = ft_strjoin(s1, s2);

//     printf("   -> Seu Resultado....: ");
//     if (resultado_ft != NULL)
//         printf("\"%s\"\n", resultado_ft);
//     else
//         printf("NULL\n");

//     free(resultado_ft);
//     printf("========================================\n");

//     return (0); // Fim do programa
// }