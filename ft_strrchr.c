#include "libft.h"

char *strrchr(const char *str, int c);

char *ft_strrchr(const char *str, int c)
{
    unsigned int    i;
    i = 0;
    char *temp;

    while(str[i] != '\0')
    {
        printf("id: 0, valor de i: %c \n", str[i]);
        if(((char *)str)[i] == c)
        {
            temp = ((char *)str + i);
            printf("valor de temp %s \n", (char *)temp);
        }
        i++;
    }
    return temp;
}

int main()
{
    const char str[] = "Rodriabcidefighj";
    const char ch = 'i';
    char *ret;
    char *ret2;

    ret = strrchr(str, ch);
    ret2 = ft_strrchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);
    printf("String after |%c| is - |%s|\n", ch, ret2);
    return(0);
    return (0);
}