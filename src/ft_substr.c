/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:10:03 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/23 11:26:58 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*v;
	
	if (s == NULL)
		return (0);
	p = malloc (len + 1);
	if (p == NULL)
		return (0);
	if(start >= ft_strlen(s))
		return (ft_strdup(""));
	v = (char *)s;
	p = (v + start);
	return (p);
}
