/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:59:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:59:22 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	while (str[i] != '\0')
	{
		printf("id: 0, valor de i: %c \n", str[i]);
		if (((char *)str)[i] == c)
		{
			temp = ((char *)str + i);
			printf("valor de temp %s \n", (char *)temp);
		}
		i++;
	}
	return (temp);
}

/* int main()
{
    const char str[] = "Rodriabcidefighj";
    const char ch = 'i';
    char *ret;
    char *ret2;

    ret = strrchr(str, ch);
    ret2 = ft_strrchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);
    printf("String after |%c| is - |%s|\n", ch, ret2);
    return(0);
    return (0);
} */