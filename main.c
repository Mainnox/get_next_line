/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akremer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:17:01 by akremer           #+#    #+#             */
/*   Updated: 2018/11/15 17:02:40 by akremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int			main(int	argc, char **argv)
{
	char	**line;
	int		fd;
	int		i;

	i = 0;
	if (!(line = (char**)malloc(sizeof(**line) * 3)))
		return (0);
	fd = open(argv[1], O_RDONLY);
	while (i < 1000)
	{
		get_next_line(fd, line);
		ft_putchar_puissant(line[0]);
		ft_putchar('\n');
		free(*line);
		i++;
	}
	close(fd);
	return (1);
}
