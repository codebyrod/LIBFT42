/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 23:11:12 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/14 01:41:04 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && little[j] != '\0' && i < len)
			{
				i++;
				j++;
				if (little[j] == '\0')
					return ((char *)big + (i - j));
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
