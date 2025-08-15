/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:59:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/15 16:57:52 by rosousa-         ###   ########.fr       */
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
		if (((char *)str)[i] == c)
			temp = ((char *)str + i);
		i++;
	}
	return (temp);
}
