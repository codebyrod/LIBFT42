/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:40 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:35:41 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

void	*ft_memset(void *str, int c, size_t n)
{
	int unsigned	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}

/* int main()
{
    int c;
    size_t n;

    c = 65;
    n = 10;

    // void *str;
    char meu_array[10];
    //int meu_array2 = 121454578;
    // void *ptr = memset(str, c, n);

    printf("Saída: %s", (char *)ft_memset(meu_array, c, n));

    return(0);
} */