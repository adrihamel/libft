#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_tolower(int c);

int main()
{
	int	c = 'a';
	
	c = ft_tolower(c);
	//c = tolower(c);
	
	printf("El caracter es: %d", c);
 }
