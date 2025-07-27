#include <stdio.h>

int isalpha(int c);

int isalpha(int c)
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
    result = isalpha(c);
    printf("Caracter verificado. Resultado: %d\n", result);
    return(0);
}