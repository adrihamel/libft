/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:28:16 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/23 13:17:53 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
  {
      char    *p;
     char    *v;
 
      p = malloc (len);
      if (p == NULL)
          return (0);
      else
          v = (char *)s;
          p = (v + start);
      return (p);
 }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && strchr(set, *s1))
		s1++;
	size_s = strlen(s1);
	while (size_s && strchr(set, s1[size_s]))
		size_s--;
	newstring = ft_substr((char*)s1, 0, size_s + 1);
	return (newstring);
}
