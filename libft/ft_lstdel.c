/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:58:31 by akremer           #+#    #+#             */
/*   Updated: 2018/11/13 16:39:41 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	while (*alst)
	{
		del(*alst, (*alst)->content_size);
		*alst = (*alst)->next;
	}
	ft_memdel((void **)*alst);
	(*alst) = NULL;
}
