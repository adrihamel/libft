#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*p;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (0);
	if (! (p = malloc(ft_strlen(s) + 1)))
		return (0);
	i = ft_strlen((char *)s);
	j = 0;
	while (*(s + j) != '\0')
	{
		*(p + j) = f(j, *(s + j);
		j++;
	}
	*(p + j) = '\0';
	return (p);
}
