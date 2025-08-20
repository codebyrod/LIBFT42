/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:54:07 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/19 22:39:35 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*fnc)(unsigned int, char))
{
	unsigned int	str_len;
	unsigned int	i;
	char			*new_str;

	i = 0;
	if (!str || !fnc)
		return (NULL);
	str_len = ft_strlen(str);
	new_str = ft_calloc(str_len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (str[i] != '\0')
	{
		new_str[i] = (*fnc)(i, str[i]);
		i++;
	}
	new_str[str_len] = '\0';
	return (new_str);
}
