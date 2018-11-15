/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:26:12 by akremer           #+#    #+#             */
/*   Updated: 2018/11/15 17:02:58 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int			get_next_line(const int fd, char **line)
{
	char			*buf;
	size_t			end;
	size_t			i;
	size_t			ret;

	ret = -1;
	i = 0;
	if (!fd || !BUFF_SIZE)
		return (-1);
	if (!(buf = (char*)malloc(sizeof(*buf) * (BUFF_SIZE + 1))))
		return (-1);
	end = read(fd, buf, BUFF_SIZE);
	buf[end] = '\0';
	while (buf[i] != '\n' && i < BUFF_SIZE)
		i++;
	*line = ft_strndup(buf, i);
	free(buf);
	return (ret);
}
