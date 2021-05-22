#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main()
{
	char	s[] = "adrian";
	char	bus[] = "dr";

	printf("Mi funcion es: %s\n", ft_strnstr(s, bus, 4));
	printf("La buena es: %s", strnstr(s, bus, 4));
 }
