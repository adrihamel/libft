#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int main()
{
	char  s1[] = "adrian";
	char  s2[] = "pedro";

	printf("Mi cadena es: %s\n", ft_memccpy(s1, s2, 114, 6));
	printf("Su cadena es: %s", memccpy(s1, s2, 114, 6));
 }
