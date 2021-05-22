#include <stdio.h>
#include <unistd.h>

size_t  ft_strlen(const char *s);

int	main(void)
{
	size_t  result;
	
	result = 0;
	char *p = "holaa";
	result = ft_strlen(p);
	printf("%lu", result);
	return (0);
}
