/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:23:44 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 21:48:52 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

/* int main()
{
    char *str = "Rodrigo Sousa";
    int result;

    result = ft_strlen(str);
    printf("A quantidade de letras na string é: %d\n", result);
    return(0);
} */