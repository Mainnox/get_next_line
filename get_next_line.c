#include "get_next_line.h"
#include "libft/libft.h"

int			scrap_realloc(char **scrap, unsigned char i)
{
	static char		**tmp;
	unsigned char	j;

	j = 0;
	if (!(tmp = (char**)malloc(sizeof(**tmp) * (i + 3))))
		return (-1);
	while (j < i)
	{
		tmp[j] = scrap[j];
		j++;
	}
	j = 0;
	while (j < i)
	{
		free(scrap[j]);
		j++;
	}
	scrap = tmp;
	return (i);
}

int			scrap_creator(const int fd,char **scrap)
{
	unsigned char	i;
	int				ret;

	i = 0;
	if (!scrap[0])
	{
		if (!(scrap = (char**)malloc(sizeof(**scrap) * (2 + 1))))
			return (-1);
		scrap[0] = ft_itoa(fd);
		scrap[1] = NULL;
		scrap[2] = NULL;
		return (0);
	}
	while (scrap[i])
	{
		if (ft_atoi(scrap[i]) == fd)
			break;
		i += 2;
	}
	if (!scrap[i])
		return (scrap_realloc(scrap, i));
	return (i);
}

void		*ft_realloc(void *src, size_t len)
{
	void	*dest;

	dest = ft_memalloc(len);
	ft_memcpy(dest, src, len);
	free(src);
	return (dest);
}

int			full_line(int end, char **line, char **scrap, char *buf, int where)
{
	unsigned char i;

	i = 0;
	if (scrap[where + 1])
	{
		while (scrap[where + 1][i] != '\n' && scrap[where + 1][i])
		{
			*line[i] = scrap[where + 1][i];
			i++;
		}
		scrap[where + 1] = scrap[where + 1] + i;
		if (scrap[where + 1][0] == '\n')
		{
			scrap[where + 1] = scrap[where + 1] + 1;
			return (1);
		}
	}
	i = 0;
	while (i < end && buf[i] != '\n')
		i++;
	*line = ft_strncat(*line, buf, i);
	if (buf[i] == '\n')
		i++;
	if (buf[i])
	{
		if (!scrap[where + 1])
			if (!(scrap[where + 1] = (char*)malloc(sizeof(char) * (end - 1) + 1)))
				return (-11);
		else
			scrap[where + 1] = ft_realloc(scrap[where + 1],
					ft_strlen(scrap[where + 1]) + end - i);
		scrap[where + 1] = ft_strncat(scrap[where + 1], buf + i, end - i);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		**scrap;
	int				where;
	char			*buf;
	int				end;
	int				ret;

	where = scrap_creator(fd, scrap);
	if (where == -1)
		return (-1);
	if (!(buf = (char*)malloc(sizeof(*buf) * (BUFF_SIZE + 1))))
		return (-1);
	end = read(fd, buf, BUFF_SIZE);
	if (end == 0)
		return (0);
	if (full_line(end, line, scrap, buf, where) == -11)
		return (-1);
	return (1);
}
