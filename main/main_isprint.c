#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isprint(int c);

int main()
{
	int	c = '%';
	
	//c = ft_isprint(c);
	c = isprint(c);
	
	printf("El caracter es: %d", c);
 }
