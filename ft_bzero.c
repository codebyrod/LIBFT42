/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:22:53 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 22:22:54 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>
#include <stdio.h>

void ft_bzero(void *str, size_t n);

void ft_bzero(void *str, size_t n)
{
    int unsigned i;
    i = 0;

    while(i < n)
    {
        ((char *)str)[i] = '\0';
        i++;
    }

}

int main()
{
    size_t n;
    //na original o número de bytes que vamos ter que modificar não pode ser maior que a quantidade de bytes existentes
    n = 5;
    char str[] = "Rodrigo";
    bzero(str, n);
    // ft_bzero(str, n);

    int i;
    i = 0;
    printf("Saída: ");
    while(i < 7)
    {
        printf("%02x", str[i]);
        i++;
    }

    return(0);
}