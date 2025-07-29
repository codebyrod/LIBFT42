/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:34 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 22:23:35 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(int n);

int ft_isprint(int n)
{
    if(n > 31 && n < 128)
        return(1);
    return(0);
}

int main()
{
    int n;
    int result;

    n = 32;
    result = ft_isprint(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}