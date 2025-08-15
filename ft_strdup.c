/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 23:30:47 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/15 00:41:00 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	char *new_str;

	new_str = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if(!new_str)
		return (NULL);
	ft_strlcpy(new_str, str, ft_strlen(str) + 1);
	return (new_str);
}
