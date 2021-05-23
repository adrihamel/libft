#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int main()
{
	int fichero = open ("fichero.txt", O_RDWR);
	char	c = 'c';

	ft_putchar_fd(c,fichero);
	return (0);
 }

