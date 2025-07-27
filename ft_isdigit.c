#include <stdio.h>

int ft_isdigit(int n);

int ft_isdigit(int n)
{
    if(n > 47 && n < 58)
        return(1);
    return(0);
}

int main()
{
    int n;
    int result;

    n = 58;
    result = ft_isdigit(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}