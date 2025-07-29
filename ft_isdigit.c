/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:16 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 22:23:31 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int n);

int ft_isdigit(int n)
{
    if(n > 47 && n < 58)
        return(1);
    return(0);
}

int main()
{
    int n;
    int result;

    n = 58;
    result = ft_isdigit(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}