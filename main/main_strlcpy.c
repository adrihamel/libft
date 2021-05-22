#include <stdio.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int main(void)
{
     size_t	a;
     char    src[] = "Hola";
     char    dest[] = "Adios";

     a = ft_strlcpy(dest, src, 4);
     printf("%zu", a);
     //printf("\nLa cadena es: %s", dest);
     return (0);
}
