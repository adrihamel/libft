#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int main()
{
	char  s[10] = "adrian";
	int   c = 'i';

	printf("Mi funcion es: %s\n", ft_strchr(s, c));
	printf("La buena es: %s", strchr(s, c));
 }
