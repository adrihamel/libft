#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isdigit(int c);

int main()
{
	int	c = '7';
	
	c = ft_isdigit(c);
	//c = isdigit(c);
	
	printf("El caracter es: %d", c);
 }
