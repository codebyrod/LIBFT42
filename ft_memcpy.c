/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:00:23 by rosousa-          #+#    #+#             */
/*   Updated: 2025/07/28 23:42:23 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n);

void *ft_memcpy (void *dest, const void *src, size_t n)
{
    unsigned int i;
    i = 0;

    while(i < n)
    {
        // ((char *)dest)[i] = ((char *)src)[i];
        *((char *)dest + i) = *((char *)src + i);
        i++;
    }
    return(dest);
}

int main()
{
    char str1[] = "Rodrigo";
    char str2[8];
    printf("Resultado de str2 antes da fnc: %s\n", str2);
    ft_memcpy(str2, str1, 8);
    printf("Resultado de str2 depois da fnc: %s\n", str2);
    return(0);
}