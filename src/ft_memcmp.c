/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:47:34 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/24 21:16:04 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				result;
	unsigned char	*src;
	unsigned char	*dst;

	i = 0;
	result = 0;
	src = ((unsigned char *)s1);
	dst = ((unsigned char *)s2);
	while (((*src + i) != '\0' || (*(dst + i) != '\0')) && (i < n))
	{
		if (*(src + i) != *(dst + i))
		{
			result = *(src + i) - *(dst + i);
			break ;
		}
		i++;
	}
	return (result);
}
