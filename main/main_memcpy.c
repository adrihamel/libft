#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main()
{
	char  s1[] = "hola que tal estas";
//	char  s2[] = "holaa";
	char	*p;

	//printf("%s\n", ft_memcpy(s1, s2, 8));
	//printf("%s", memcpy(s1, s1 + 1, 10));
	p = (char *)ft_memcpy(s1 + 1, s1, 10);
    printf("%s", p);	
 }
