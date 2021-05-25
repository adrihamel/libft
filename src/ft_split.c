/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 19:42:16 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/25 20:05:43 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numPalabras(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
		if (*s++ && *s != c)
			i++;
	return (i);
}

static char	*ft_palabraIter(const char *s, char c)
{
	char	*palabra;
	int		i;

	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
		i++;
	palabra = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
	{
		*(palabra + i) = *(s + i);
		i++;
	}
	*(palabra + i) = '\0';
	return (palabra);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;

	if (s == NULL)
		return (0);
	str = (char **)malloc((ft_numPalabras(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			*(str + i++) = ft_palabraIter(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	*(str + i) = NULL;
	return (str);
}
