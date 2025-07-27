#include <stdio.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(*(str + i) != '\0')
        i++;
    return(i);
}

int main()
{
    char *str = "Rodrigo Sousa";
    int result;

    result = ft_strlen(str);
    printf("A quantidade de letras na string é: %d\n", result);
    return(0);
}