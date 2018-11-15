/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:26:12 by akremer           #+#    #+#             */
/*   Updated: 2018/11/15 17:50:19 by akremer          ###   ########.fr       */
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
	static t_list	*reste;
	char			*nextline;
	size_t			j;

	j = 0;
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
	if (!(nextline = (char*)malloc(sizeof(*nextline) * ((BUFF_SIZE - i) + 1))))
		return (-1);
	if (buf[i])
	{
		while (i < BUFF_SIZE)
		{
			nextline[j] = buf[i];
			i++;
			j++;
		}
	}
	nextline[j] = '\0';
	if (j > 0)
	{
		reste = ft_lstnew(nextline[j], );
	}
	free(buf);
	return (1);
}
