/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:34:56 by abel-hid          #+#    #+#             */
/*   Updated: 2022/10/30 13:44:19 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char		*str;
	unsigned char		ch;
	size_t				i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (str);
}
