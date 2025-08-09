/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:22:48 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:28:29 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src > dest)
		{
			((char *)dest)[n - 1] = ((char *)src)[n -1];
			n--;
		}
		else
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* int main()
{
    char str2[] = "XXXXXXX";
    char str1[] = "Rodrigo";
    size_t n;
    n = 3;

    printf("Resultado de str2 antes da fnc: %s\n", str2);
    // memmove(str2, str1, n);
    ft_memmove(str2, str1, n);
    printf("Resultado de str2 depois da fnc: %s\n", str2);
    return(0);
} */