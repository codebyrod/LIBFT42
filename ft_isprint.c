#include <stdio.h>

int ft_isprint(int n);

int ft_isprint(int n)
{
    if(n > 31 && n < 128)
        return(1);
    return(0);
}

int main()
{
    int n;
    int result;

    n = 32;
    result = ft_isprint(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}