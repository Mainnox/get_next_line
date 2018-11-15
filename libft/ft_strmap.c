/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:11:48 by akremer           #+#    #+#             */
/*   Updated: 2018/11/12 14:04:28 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *src, char (*f)(char))
{
	char	*dest;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	if (!(dest = (char*)malloc(sizeof(*dest) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		dest[i] = f(src[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
