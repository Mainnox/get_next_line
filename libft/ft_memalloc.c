/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:52:58 by akremer           #+#    #+#             */
/*   Updated: 2018/11/12 12:32:31 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t n)
{
	void	*tab;

	if (!(tab = (void*)malloc(sizeof(*tab) * n)))
		return (NULL);
	ft_bzero(tab, n);
	return (tab);
}
