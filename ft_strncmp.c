/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:42:58 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/15 18:11:14 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	int				temp_s1;
	int				temp_s2;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
		{
			temp_s1 = ((int)(((unsigned char *)str1)[i]));
			temp_s2 = ((int)(((unsigned char *)str2)[i]));
			return (temp_s1 - temp_s2);
		}
		i++;
	}
	return (0);
}
