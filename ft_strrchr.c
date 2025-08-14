/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:59:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/13 22:41:18 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
