#include <stdio.h>

int ft_toupper(int n);

int ft_toupper(int n)
{
    if(n > 96 && n < 123)
        return(n - 32);
    return(n);
}

int main()
{
    int n;
    int result;
    
    n = 82;
    result = ft_toupper(n);
    printf("A letra de entrada é: %c\n", n);
    printf("A letra de saída é: %c\n", result);
    return(0);
}