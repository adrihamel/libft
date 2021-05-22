#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size);

int main()
{
	char *p;
	char *v;

	p=(char *)ft_calloc(2,4);
	v=(char *)calloc(2,4);
	printf("Mi funcion es: %s\n", p);
	printf("Mi funcion es: %p\n", p);
	printf("Su funcion es: %s\n", v);
 }
