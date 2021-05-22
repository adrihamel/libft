#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_toupper(int c);

int main()
{
	int	c = 'a';
	
	c = ft_toupper(c);
	//c = toupper(c);
	
	printf("El caracter es: %d", c);
 }
