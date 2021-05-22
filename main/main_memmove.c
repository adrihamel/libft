#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int main()
{
	char  s1[] = "hola que tal estas";
	char  s2[] = "holo que tal estassjkshdf";
	char	*p;

	//printf("%s\n", ft_memcpy(s1, s2, 8));
	//printf("%s", memcpy(s1, s1 + 1, 10));
	p = (char *)ft_memmove(s1 + 1, s1, 10);
    printf("Memmove: %s\n", p);	
 }
