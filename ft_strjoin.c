/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:35:05 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/20 18:31:20 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	full_size;
	char			*new_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	full_size = len_s1 + len_s2;
	new_str = ft_calloc(full_size + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, len_s1);
	ft_strlcpy(new_str + len_s1, s2, len_s2 + 1);
	return (new_str);
}
