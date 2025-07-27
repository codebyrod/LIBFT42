#include <stdio.h>

int ft_isascii(int n);

int ft_isascii(int n)
{
    if(n >= 0 && n < 128)
        return(1);
    return(0);
}

int main()
{
    int n;
    int result;

    n = 130;
    result = ft_isascii(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}