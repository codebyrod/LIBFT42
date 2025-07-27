#include <stdio.h>

int isdigit(int n);

int isdigit(int n)
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
    result = isdigit(n);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}