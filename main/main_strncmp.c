#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char    s1[] = "adios";
	char    s2[] = "hola";
	int     result = 0;
	
	result = ft_strncmp(s1, s2, 5);
	//result = strncmp(s1, s2, 5);
	printf("%d", result);
	if (result == 0)
		printf("Son iguales las cadenas");
	else if (result > 0)
		printf("Primera cadena es mayor que la segunda");
	else
		printf("Segunda mayor que la primera");
	return (0);
}
