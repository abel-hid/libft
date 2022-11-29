/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:11 by abel-hid          #+#    #+#             */
/*   Updated: 2022/11/04 22:46:23 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*cont;

	if (!f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		cont = f(lst->content);
		new = ft_lstnew(cont);
		if (!new)
		{
			del(cont);
			if (head)
				ft_lstclear(&head, del);
			return (NULL);
		}
		if (!head)
			head = new;
		else
			ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
