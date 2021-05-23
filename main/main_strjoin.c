#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2);

int main()
{
	char			p[]= "hola";
	char			v[]= "adri";
	
	printf("Mi funcion es: %s\n", ft_strjoin(p, v));
 }

