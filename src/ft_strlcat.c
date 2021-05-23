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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(src);
	k = ft_strlen(dst);
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
