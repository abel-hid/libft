/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:00:28 by abel-hid          #+#    #+#             */
/*   Updated: 2022/10/30 13:37:09 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(unsigned long res, int n)
{
	if (n == 1)
		if (res >= 92233720368547758)
			return (-1);
	if (n == -1)
		if (res >= 92233720368547758)
			return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	long	result;
	int		overflow;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			n = -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		overflow = check_overflow(result, n);
		if (overflow != 1)
			return (overflow);
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return ((result * n));
}
