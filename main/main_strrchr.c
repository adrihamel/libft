#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int main()
{
	char  s[10] = "adrian";
	int   c = 'a';

	printf("Mi funcion es: %s\n", ft_strrchr(s, c));
	printf("La buena es: %s", strrchr(s, c));
 }
