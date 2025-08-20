/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:51:44 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/20 15:32:42 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *str, char chr);
static void	*ft_free_all(char **str);
char	**ft_split(char const *str, char chr);

static void	*ft_free_all(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static size_t	ft_count_word(char const *str, char chr)
{
	size_t	count;
	int		i_word;

	count = 0;
	i_word = 0;
	while (*str)
	{
		if (*str != chr && i_word == 0)
		{
			i_word = 1;
			count++;
		}
		else if (*str == chr)
			i_word = 0;
		str++;
	}
	return (count);
}
static size_t	ft_get_word_len(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *str, char chr)
{
	char	**array;
	size_t	word_count;
	size_t	i;

	if (!str)
		return (NULL);
	word_count = ft_count_word(str, chr);
	array = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*str == chr)
			str++;
		array[i] = ft_substr(str, 0, ft_get_word_len(str, chr));
		if (!array[i])
			return (ft_free_all(array));
		str += ft_get_word_len(str, chr);
		i++;
	}
	return (array);
}