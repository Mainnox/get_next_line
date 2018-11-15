/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:01:45 by akremer           #+#    #+#             */
/*   Updated: 2018/11/07 12:22:32 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*nstr;

	nstr = (char*)str;
	i = 0;
	while (i < n)
	{
		nstr[i] = c;
		i++;
	}
	return (str);
}
