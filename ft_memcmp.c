/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:21:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:22:56 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num);

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned int	i;

	i = 0;
	while (i < num)
	{
		if ((((char *)str1)[i]) > (((char *)str2)[i]))
		{
			printf("id: 0 \n");
			return ((int)(((char *)str1)[i]) - (int)(((char *)str2)[i]));
		}
		else if ((((char *)str1)[i]) < (((char *)str2)[i]))
		{
			printf("id: 1 \n");
			return ((int)(((char *)str1)[i]) - (int)(((char *)str2)[i]));
		}
		printf("id: 2 \n");
		i++;
	}
	printf("id: 3 \n");
	return (0);
}

/* int main()
{
    char str1[10];
    char str2[8];
    int result;
    int result2;
    int num;

    num = 6;

    memcpy(str1, " Rodrigo", 3);
    memcpy(str2, "aionísio", 3);

    result = ft_memcmp(str1, str2, num);
    result2 = memcmp(str1, str2, num);

    if(result > 0)
    {
        printf("r: %d STR1 é maior que STR2 \n", result);
    } else if (result < 0)
    {
        printf("r: %d STR2 é maior que STR1 \n", result);
    } else
    {
        printf("r: %d STR1 e STR2 são iguais \n", result);
    }

    if(result2 > 0)
    {
        printf("r: %d STR1 é maior que STR2 \n", result2);
    } else if (result2 < 0)
    {
        printf("r: %d STR2 é maior que STR1 \n", result2);
    } else
    {
        printf("r: %d STR1 e STR2 são iguais \n", result2);
    }

    return(0);
} */