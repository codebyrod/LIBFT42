/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:59:31 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/20 15:34:19 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_is_int_min(int n)
{
	int	count;
	count = 0;
	if (n == -2147483648)
		count = 11;
	return(count);
}

static int	ft_count_digit(int n)
{
	int	count;
	int	signal;

	count = 0;
	if(n == 0)
		count++;
	if(n < 0)
	{
		if (n == -2147483648)
			return (ft_count_is_int_min(n));
		signal = -1;
		n *= signal;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	if(n)
		count++;
	return (count);
}

/* char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	res_div;
	unsigned int	res_mod;
	unsigned int	count;
	char	*new_str;
	
	count = ft_count_digit(n);
	new_str = calloc(count + 1, sizeof(char));
	res_div = 0;
	res_mod = 0;
	i = 0;
	if (n > 9)
	{
		res_div = n / 10;
		res_mod = n % 10;
	}
	else
	{
		while (i >= 0 && i <= 9)
		{
			write(1, &i, 1);
		}
	}
} */
/* 
int main(void)
{
    char buffer_orig[20]; // Buffer para o resultado da sprintf (original)
    char *resultado_ft;   // Ponteiro para o resultado da sua ft_itoa
    int  n;                // Variavel para o numero a ser testado

    printf("Testando ft_itoa:\n");
    printf("========================================\n");

    // --- Teste com 0 ---
    n = 0;
    printf("Testando o numero: %d\n", n);
    sprintf(buffer_orig, "%d", n);
    printf("   -> Resultado Esperado (sprintf): \"%s\"\n", buffer_orig);
    resultado_ft = ft_itoa(n);
    printf("   -> Seu Resultado (ft_itoa)  ....: ");
    if (resultado_ft != NULL) printf("\"%s\"\n", resultado_ft); else printf("NULL\n");
    if (resultado_ft != NULL && strcmp(buffer_orig, resultado_ft) == 0) printf("   Resultado: ✅ PASS\n"); else printf("   Resultado: ❌ FAIL\n");
    free(resultado_ft);
    printf("----------------------------------------\n");

    // --- Teste com 42 ---
    n = 42;
    printf("Testando o numero: %d\n", n);
    sprintf(buffer_orig, "%d", n);
    printf("   -> Resultado Esperado (sprintf): \"%s\"\n", buffer_orig);
    resultado_ft = ft_itoa(n);
    printf("   -> Seu Resultado (ft_itoa)  ....: ");
    if (resultado_ft != NULL) printf("\"%s\"\n", resultado_ft); else printf("NULL\n");
    if (resultado_ft != NULL && strcmp(buffer_orig, resultado_ft) == 0) printf("   Resultado: ✅ PASS\n"); else printf("   Resultado: ❌ FAIL\n");
    free(resultado_ft);
    printf("----------------------------------------\n");

    // --- Teste com -987 ---
    n = -987;
    printf("Testando o numero: %d\n", n);
    sprintf(buffer_orig, "%d", n);
    printf("   -> Resultado Esperado (sprintf): \"%s\"\n", buffer_orig);
    resultado_ft = ft_itoa(n);
    printf("   -> Seu Resultado (ft_itoa)  ....: ");
    if (resultado_ft != NULL) printf("\"%s\"\n", resultado_ft); else printf("NULL\n");
    if (resultado_ft != NULL && strcmp(buffer_orig, resultado_ft) == 0) printf("   Resultado: ✅ PASS\n"); else printf("   Resultado: ❌ FAIL\n");
    free(resultado_ft);
    printf("----------------------------------------\n");

    // --- Teste com INT_MAX ---
    n = INT_MAX; // O maior int possível
    printf("Testando o numero: %d\n", n);
    sprintf(buffer_orig, "%d", n);
    printf("   -> Resultado Esperado (sprintf): \"%s\"\n", buffer_orig);
    resultado_ft = ft_itoa(n);
    printf("   -> Seu Resultado (ft_itoa)  ....: ");
    if (resultado_ft != NULL) printf("\"%s\"\n", resultado_ft); else printf("NULL\n");
    if (resultado_ft != NULL && strcmp(buffer_orig, resultado_ft) == 0) printf("   Resultado: ✅ PASS\n"); else printf("   Resultado: ❌ FAIL\n");
    free(resultado_ft);
    printf("----------------------------------------\n");

    // --- Teste com INT_MIN ---
    n = INT_MIN; // O menor int possível (o teste mais difícil!)
    printf("Testando o numero: %d\n", n);
    sprintf(buffer_orig, "%d", n);
    printf("   -> Resultado Esperado (sprintf): \"%s\"\n", buffer_orig);
    resultado_ft = ft_itoa(n);
    printf("   -> Seu Resultado (ft_itoa)  ....: ");
    if (resultado_ft != NULL) printf("\"%s\"\n", resultado_ft); else printf("NULL\n");
    if (resultado_ft != NULL && strcmp(buffer_orig, resultado_ft) == 0) printf("   Resultado: ✅ PASS\n"); else printf("   Resultado: ❌ FAIL\n");
    free(resultado_ft);
    printf("========================================\n");

    return (0);
} */

int main(void)
{
    int     n;              // O número que vamos testar
    size_t  count_esperado; // O resultado correto que já sabemos
    size_t  count_ft;       // O resultado da sua função

    printf("Testando a funcao de contagem de caracteres para itoa:\n");
    printf("=====================================================\n");

    // --- Teste 1: Número 0 (caso especial, 1 caractere) ---
    n = 0;
    count_esperado = 1; // Para o caractere '0'
    count_ft = ft_count_digit(n);
    printf("Testando: %d\n", n);
    printf("   -> Esperado: %zu | Sua funcao retornou: %zu -> ", count_esperado, count_ft);
    if (count_esperado == count_ft) printf("✅ PASS\n"); else printf("❌ FAIL\n");
    printf("-----------------------------------------------------\n");
    
    // --- Teste 2: Número positivo simples ---
    n = 123;
    count_esperado = 3; // Para '1', '2', '3'
    count_ft = ft_count_digit(n);
    printf("Testando: %d\n", n);
    printf("   -> Esperado: %zu | Sua funcao retornou: %zu -> ", count_esperado, count_ft);
    if (count_esperado == count_ft) printf("✅ PASS\n"); else printf("❌ FAIL\n");
    printf("-----------------------------------------------------\n");

    // --- Teste 3: Número negativo (deve contar o sinal '-') ---
    n = -45;
    count_esperado = 3; // Para '-', '4', '5'
    count_ft = ft_count_digit(n);
    printf("Testando: %d\n", n);
    printf("   -> Esperado: %zu | Sua funcao retornou: %zu -> ", count_esperado, count_ft);
    if (count_esperado == count_ft) printf("✅ PASS\n"); else printf("❌ FAIL\n");
    printf("-----------------------------------------------------\n");

    // --- Teste 4: Limite máximo (INT_MAX) ---
    n = INT_MAX; // 2147483647
    count_esperado = 10; // 10 dígitos
    count_ft = ft_count_digit(n);
    printf("Testando: INT_MAX (%d)\n", n);
    printf("   -> Esperado: %zu | Sua funcao retornou: %zu -> ", count_esperado, count_ft);
    if (count_esperado == count_ft) printf("✅ PASS\n"); else printf("❌ FAIL\n");
    printf("-----------------------------------------------------\n");

    // --- Teste 5: Limite mínimo (INT_MIN, o mais traiçoeiro) ---
    n = INT_MIN; // -2147483648
    count_esperado = 11; // O sinal '-' + 10 dígitos
    count_ft = ft_count_digit(n);
    printf("Testando: INT_MIN (%d)\n", n);
    printf("   -> Esperado: %zu | Sua funcao retornou: %zu -> ", count_esperado, count_ft);
    if (count_esperado == count_ft) printf("✅ PASS\n"); else printf("❌ FAIL\n");
    printf("=====================================================\n");

    return (0);
}