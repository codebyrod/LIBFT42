#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size);

int main()
{
    char dest[20] = "Hello, ";
    char *src = "world!";
    size_t result = strlcat(dest, src, sizeof(dest));

    printf("Resultado: %s\n", dest);
    printf("Tamanho retornado: %zu\n", result);
    return (0);
}