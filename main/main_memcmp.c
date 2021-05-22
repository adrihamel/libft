#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
	char	src[] = "holo";
	char	dst[] = "h";

	printf("Mi funcion es: %d\n", ft_memcmp(dst, src, 6));
	printf("Su funcion es: %d\n", memcmp(dst, src, 6));
 }
