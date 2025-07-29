/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:00 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 22:23:01 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int n);

int ft_isalnum(int n)
{
    if((n > 47 && n < 58) || (n > 64 && n < 90) || (n > 96 && n < 123))
        return(1);
    return(0);
}

int main ()
{
    int n;
    int result;

    n = 10;
    result = ft_isalnum(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}