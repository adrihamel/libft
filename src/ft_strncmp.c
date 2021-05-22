/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:47:34 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/18 20:38:30 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (((*s1 + i) != '\0' || (*(s2 + i) != '\0')) && (i < n))
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			break ;
		}
		i++;
	}
	return (result);
}
