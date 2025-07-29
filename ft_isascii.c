/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:12 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 22:23:13 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int n);

int ft_isascii(int n)
{
    if(n >= 0 && n < 128)
        return(1);
    return(0);
}

int main()
{
    int n;
    int result;

    n = 130;
    result = ft_isascii(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}