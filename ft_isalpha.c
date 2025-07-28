#include <stdio.h>

int ft_isalpha(int c);

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

int main()
{
    int c;
    int result;
    c = 91;
    result = ft_isalpha(c);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}