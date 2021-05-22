#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main()
{
	char  s1[] = "hola";
//	char  s2[] = "holaa";
	char	*p;

	//printf("%s\n", ft_memcpy(s1, s2, 8));
	//printf("%s", memcpy(s1, s1 + 1, 10));
	p = (char *)memchr(s1, 'o', 4);
    printf("%s", p);	
 }
