/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:26:56 by abel-hid          #+#    #+#             */
/*   Updated: 2022/10/30 20:04:15 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while (needle[b] == haystack[a + b]
			&& haystack[a + b] != '\0' && needle[b] != '\0' && a + b < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + a);
					b++;
		}
		a++;
	}
	return (0);
}
