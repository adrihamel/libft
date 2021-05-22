#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int main()
{
	char p[]= "hola";

	printf("Mi funcion es: %s\n", ft_strdup(p));
	printf("Su funcion es: %s\n", strdup(p));
 }
