/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:59:07 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/23 15:22:46 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if ( fd < 0)
		return ;
	while (*s != '\0')
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
