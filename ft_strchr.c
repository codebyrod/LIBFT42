#include "libft.h"

char *ft_strchr(const char *str, int sch_str);

char *ft_strchr(const char *str, int sch_str)
{
    unsigned int    i;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == sch_str)
        {
            return ((char *)str + i);
        }
        i++;
    }

    if (sch_str == '\0')
    {
        return ((char *)str + i);
    }
  // "ch" is search string
    return (0);
}

int main () 
{
   const char str[] = "Rodrigo";
   const char ch = 'i';
   char *ret;
   char *ret2;

   ret = strchr(str, ch);
   ret2 = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, ret2);
   return(0);
}