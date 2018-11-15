/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:43:16 by akremer           #+#    #+#             */
/*   Updated: 2018/11/14 15:11:16 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ndest;
	const char	*nsrc;

	ndest = (char*)dest;
	nsrc = (const char*)src;
	if (n == 0 || ndest == nsrc)
		return (dest);
	while (n--)
		*ndest++ = *nsrc++;
	return (dest);
}
