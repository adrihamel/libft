/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 19:42:16 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/26 19:39:47 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numPalabras(char *str, char c)
{
	int	i;

	i = 0;
	if (!*str)
		return (0);
	if (*(str + 1) != '\0' && *str != c)
		i = 1;
	while (*(str + 1) != '\0')
	{
		if (*str == c && *(str + 1) != c && *(str + 1) != '\0')
			i++;
		str++;
	}
	return (i);
}

static void	ft_iteraPal(char *s, char c, int numP, char **str)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (numP--)
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		j = i;
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
		*str = (char *)malloc((i - j + 1) * sizeof(char));
		k = 0;
		l = j;
		while (k + l < i)
		{
			*(*(str) + k++) = *(s + j);
			*(*str + k) = '\0';
			j++;
		}
		str++;
	}
	*str = 0;
}

char	**ft_split(const char *s, char c)
{
	size_t		numP;
	char		**str;

	if (s == NULL)
		return (0);
	numP = ft_numPalabras((char *)s, c);
	str = (char **)malloc((numP + 1) * sizeof(char *));
	if (str == NULL)
		return (0);
	ft_iteraPal((char *)s, c, numP, str);
	return (str);
}
