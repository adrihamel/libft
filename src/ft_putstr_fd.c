/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:21:28 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/23 14:39:21 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s != '\0')
		write(fd, s++, 1);
}
