/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:36:43 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/22 14:20:13 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
size_t  ft_strlen(const char *s)
{
	int n;
	
	if (s == NULL)
		return (-1);
	n = 0;
	if (s)
	{
		while (*s != '\0')
		{
			n++;
			s++;
		}
	}
	return (n);
}
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t              i;
	
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;
	
	len = ft_strlen(s1) + 1;	
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (0);
	return (ft_memcpy(p, s1, len));
}
