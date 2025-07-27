#include <stdio.h>

int isascii(int n);

int isascii(int n)
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
    result = isascii(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}