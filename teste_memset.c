#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{

    int unsigned i;
    i = 0;

    while(i < n)
    {
        ((char *)str)[i] = c;
        i++;
    }
    return(str);
}

int main () 
{
    // char str[50];
    // void *str;
    int str[] = {1, 2, 3, 4, 5, 6, 7, 8};

   printf("Saída memset: %s\n", (char *)memset(str, 65, 7));
   printf("Saída ft_memset: %s\n", (char *)ft_memset(str, 65, 7));
   
   return(0);
}