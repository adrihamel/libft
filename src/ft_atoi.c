/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:17:57 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/18 18:03:21 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	cont;

	result = 0;
	sign = 1;
	cont = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while ((*str == '-' || *str == '+') && cont < 1)
	{
		if (*str == '-')
			sign *= -1;
		str++;
		cont++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (int)(*str - '0');
		str++;
	}
	return (result * sign);
}
