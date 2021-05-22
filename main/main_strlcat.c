#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
 {
     char    src[] = "hola1";
     char    dest[] = "adios";
     size_t	result = 0;

 	 //result = ft_strlcat(dest, src, 6);
     result = strlcat(dest, src, 6);
     printf("La cadena es: %zu", result);


     return (0);
 }
