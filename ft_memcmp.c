/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:21:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/09 20:52:55 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned int		i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (i < num)
	{
		if ((s1[i]) > (s2[i]))
		{
			return ((int)(s1[i]) - (int)(s2[i]));
		}
		else if (((int)s1[i]) < ((int)(s2[i])))
		{
			return ((int)((s1[i])) - (int)(s2[i]));
		}
		i++;
	}
	return (0);
}

/* int main()
{
    char str1[10];
    char str2[8];
    int result;
    int result2;
    int num;

    num = 6;

    memcpy(str1, " Rodrigo", 3);
    memcpy(str2, "aionísio", 3);

    result = ft_memcmp(str1, str2, num);
    result2 = memcmp(str1, str2, num);

    if(result > 0)
    {
        printf("r: %d STR1 é maior que STR2 \n", result);
    } else if (result < 0)
    {
        printf("r: %d STR2 é maior que STR1 \n", result);
    } else
    {
        printf("r: %d STR1 e STR2 são iguais \n", result);
    }

    if(result2 > 0)
    {
        printf("r: %d STR1 é maior que STR2 \n", result2);
    } else if (result2 < 0)
    {
        printf("r: %d STR2 é maior que STR1 \n", result2);
    } else
    {
        printf("r: %d STR1 e STR2 são iguais \n", result2);
    }

    return(0);
} */
/* 
void	ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(TIMEOUT);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_memcmp("salut", "salut", 5));
	else if (arg == 2)
		ft_print_result(ft_memcmp("t\200", "t\0", 2));
	else if (arg == 3)
		ft_print_result(ft_memcmp("testss", "test", 5));
	else if (arg == 4)
		ft_print_result(ft_memcmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_memcmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_memcmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	else if (arg == 8)
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
	else if (arg == 9)
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
} */