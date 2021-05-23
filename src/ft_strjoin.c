/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:43:53 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/23 12:07:15 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*p;
	int		len1;
	int		len2;
	int		i;
	int		j;

	str1 = (char *)s1;
	str2 = (char *)s2;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	
	p = malloc(len1 + len2);
	if (p == NULL)
		return (0);
	else
	{
		i = 0;
		while (*(str1 + i) != '\0')
		{
			*(p + i) = *(str1 + i);
			i++;
		}
		j = 0;
		while (*(str2 + j) != '\0')
		{
			*(p + i) = *(str2 + j);
			i++;
			j++;
		}			
	}
	return (p);
}
