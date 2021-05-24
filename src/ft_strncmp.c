/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:47:34 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/24 19:30:23 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (((*str1 + i) != '\0' || *(str2 + i) != '\0') && (i < n))
	{
		if ((*(str1 + i) - *(str2 + i) != 0)
			|| (!*(str1 + i) && (!*(str2 + i))))
			return (*(str1 + i) - *(str2 + i));
		i++;
	}
	return (0);
}
