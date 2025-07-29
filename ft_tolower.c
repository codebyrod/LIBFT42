/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:47 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 23:42:47 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lower(int n);

int ft_lower(int n)
{
    if(n > 65 && n < 91)
        return(n + 32);
    return(n);
}


int main()
{
    int n;
    int result;

    n = 65;
    result = ft_lower(n);
    printf("A letra de entrada é: %c\n", n);
    printf("A letra de saída é: %c\n", result);
    return(0);
}