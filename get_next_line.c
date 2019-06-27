/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:03:35 by tswart            #+#    #+#             */
/*   Updated: 2019/06/27 14:03:02 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	cleanjoin(char *base, char *extra)
{
	char *tmp;

	tmp = ft_strjoin(base);
	fd_strdel(&base);
	base = ft_dupdel(&tmp);
}

static int	readline(const int fd, char **fd_arr)
{
	char	buff[BUFF_SIZE + 1];
	int		i;
	int		out;

	out = 0;
	while (!ft_strchr(fd_arr[fd], '\n') && i = read(fd, buff, BUFF_SIZE))
	{
		if (buff[i] == '\n')
		{
			out = 1;
			ft_replacechr(buff, '\n', '\0');
		}
		buff[i] = '\0';
		cleanjoin(fd_arr[fd], buff);
	}
	return (out);
}

int get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*fd_arr[1024];
	int			i;

	if (fd < 0 || line == NULL)
		return (-1);
	if (fd_arr[fd] == NULL)
		fd_arr[fd] = ft_strnew(0);
	i = readline(fd, fd_arr);
	if (ft_strlen(fd_arr[fd]) != 0)
		*line = ft_strdupdel(&fd_arr[fd]);
	return (i);
}
