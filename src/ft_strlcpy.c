/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:35:02 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/18 18:23:33 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (dstsize > 0)
	{
		while (*(src + a) && a < dstsize - 1)
		{
			*(dst + a) = *(src + a);
			a++;
		}
	}
	if (dstsize != 0)
		*(dst + a) = 0;
	b = 0;
	while (*(src + b) != '\0')
		b++;
	return (b);
}
