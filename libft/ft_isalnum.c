/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:57:39 by akremer           #+#    #+#             */
/*   Updated: 2018/11/09 11:46:50 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalnum(int c)
{
	unsigned char rififi;

	rififi = (unsigned char)c;
	if (ft_isalpha(c) + ft_isdigit(c) > 0)
		return (1);
	return (0);
}
