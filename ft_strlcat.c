/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:16:58 by abel-hid          #+#    #+#             */
/*   Updated: 2022/10/30 20:03:25 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l_src;
	size_t	l_dst;

	if (size == 0)
		return (ft_strlen(src));
	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	i = l_dst;
	j = 0;
	while (size <= i)
		return (l_src + size);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (l_dst + l_src);
}
