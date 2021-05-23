#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
	char			p[]= "hola que tal estas";
	unsigned int	start = 7;
	
	printf("Mi funcion es: %s\n", ft_substr(p, start, 7));
 }
