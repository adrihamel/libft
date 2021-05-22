#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isascii(int c);

int main()
{
	int	c = 'e';
	
	//c = ft_isascii(c);
	c = isascii(c);
	
	printf("El caracter es: %d", c);
 }
