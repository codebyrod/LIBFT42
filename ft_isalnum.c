#include <stdio.h>

int ft_isalnum(int n);

int ft_isalnum(int n)
{
    if((n > 47 && n < 58) || (n > 64 && n < 90) || (n > 96 && n < 123))
        return(1);
    return(0);
}

int main ()
{
    int n;
    int result;

    n = 10;
    result = ft_isalnum(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}