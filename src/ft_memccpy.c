/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:45:46 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/22 10:55:53 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == (char)c)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			return (&dst[++i]);
		}
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (0);
}
