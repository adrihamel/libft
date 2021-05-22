/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:54:18 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/22 11:33:00 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (! *(needle))
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && (k < len))
	{
		while (*(needle + j) == *(haystack + i + j) && (k < len))
		{
			if (*(needle + j + 1) == '\0')
				return ((char *)haystack + i);
			j++;
			k++;
		}
		k = k - j;
		k++;
		j = 0;
		i++;
	}
	return (0);
}
