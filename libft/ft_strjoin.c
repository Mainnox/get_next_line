/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:33:32 by akremer           #+#    #+#             */
/*   Updated: 2018/11/13 17:03:19 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	if (!(dest = (char*)malloc(sizeof(*dest) * ft_strlen(s1)
					+ ft_strlen(s2) + 1)))
		return (NULL);
	dest = ft_strcpy(dest, s1);
	dest = ft_strcat(dest, s2);
	return (dest);
}
