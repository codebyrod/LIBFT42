#include <stdio.h>

int ft_lower(int n);

int ft_lower(int n)
{
    if(n > 65 && n < 91)
        return(n + 32);
    return(n);
}


int main()
{
    int n;
    int result;

    n = 65;
    result = ft_lower(n);
    printf("A letra de entrada é: %c\n", n);
    printf("A letra de saída é: %c\n", result);
    return(0);
}