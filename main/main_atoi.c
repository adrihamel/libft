#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int main(int argc, char*argv[])
{
	int n = 0;
	
	if (argc < 2)
		write(1, "Error", 5);
	
	n = ft_atoi(argv[1]);
	//n = atoi(argv[1]);
	
	printf("El numero es: %d", n);
 }
