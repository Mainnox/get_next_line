/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:34:24 by akremer           #+#    #+#             */
/*   Updated: 2018/11/13 16:22:14 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char			*str;
	int				i;
	unsigned char	rififi;

	i = 0;
	str = (char*)s;
	rififi = (unsigned char)c;
	if (rififi == '\0')
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == rififi)
			return (str + i);
		i++;
	}
	return (NULL);
}
