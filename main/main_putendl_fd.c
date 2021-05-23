#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd);

int main()
{
	int fichero = open ("fichero.txt", O_RDWR);
	char	*c = "hola";

	ft_putendl_fd(c,fichero);
	return (0);
 }

