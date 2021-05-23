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

#include "libft.h"

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
