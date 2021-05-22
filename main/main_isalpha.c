#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isalpha(int c);

int main()
{
	int	c = 'g';
	
	//c = ft_isalpha(c);
	c = isalpha(c);
	
	printf("El caracter es: %d", c);
 }
