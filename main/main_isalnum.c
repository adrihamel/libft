#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isalnum(int c);

int main()
{
	int	c = 'a';
	
	//c = ft_isalnum(c);
	c = isalnum(c);
	
	printf("El caracter es: %d", c);
 }
