#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len);

int main()
{
	char  p[10] = "hola";
	char  v[] = "hola";

	ft_memset(p, 98, 3);
	printf("%s\n", p);
	memset(v, 98, 3);
	printf("%s\n", v);

 }
