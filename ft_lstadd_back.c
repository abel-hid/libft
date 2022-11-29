/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 02:21:03 by abel-hid          #+#    #+#             */
/*   Updated: 2022/10/29 19:22:46 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_add;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_add = ft_lstlast(*lst);
	last_add->next = new;
}
