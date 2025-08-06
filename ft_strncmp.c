#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n);

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned int    i;
    i = 0;

    while(i < n && str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] > str2[i] || str1[i] < str2[i])
        {
            return (((int)(((unsigned char *)str1)[i])) - ((int)(((unsigned char *)str2)[i])));
        }
        i++;
    }
    return (0);
}

int main()
{
    const char *s1 = "Rodrigo";
    const char *s2 = "''odrigo";
    const char *s3 = "Xodolfo";
    const char *s4 = "ÉRoda";
    const char *s5 = "Á";
    const char *s6 = "Ó@dRigo";

    size_t n;

    n = 7;
    printf("1: %d\n", strncmp(s1, s2, n)); 
    printf("1: %d\n", ft_strncmp(s1, s2, n)); 
  
    n = 7;
    printf("2: %d\n", strncmp(s1, s3, n)); 
    printf("2: %d\n", ft_strncmp(s1, s3, n)); 
    // Deve retornar >0 ou <0 dependendo do char que diverge

    n = 3;
    printf("3: %d\n", strncmp(s1, s5, n)); 
    printf("3: %d\n", ft_strncmp(s1, s5, n)); 
    // retornar 0 (iguais nos 3 primeiros)

    n = 7;
    printf("4: %d\n", strncmp(s1, s4, n));
    printf("4: %d\n", ft_strncmp(s1, s4, n));
    //retornar >0, pois 'i' > '\0'

    n = 7;
    printf("5: %d\n", strncmp(s1, s6, n));
    printf("5: %d\n", ft_strncmp(s1, s6, n));

    return (0);
}