/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:01:36 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/18 18:35:08 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_contar(const char *str)
{
	size_t	n;

	n = 0;
	while (*(str + n))
		n++;
	return (n);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_contar(src);
	k = ft_contar(dst);
	i = 0;
	while (*(src + i) && (k + i + 1) < dstsize)
	{
		if ((k + i + 1) < dstsize)
			(*(dst + k + i) = *(src + i));
		i++;
	}
	*(dst + k + i) = '\0';
	if (dstsize < k)
		return (j + dstsize);
	else
		return (j + k);
}
