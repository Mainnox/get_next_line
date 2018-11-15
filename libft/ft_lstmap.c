/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:58:27 by akremer           #+#    #+#             */
/*   Updated: 2018/11/14 11:35:47 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	start = new;
	lst = lst->next;
	while (lst)
	{
		new->next = f(lst);
		new = new->next;
		lst = lst->next;
	}
	return (start);
}
