/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:03:35 by tswart            #+#    #+#             */
/*   Updated: 2019/07/22 09:18:23 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	readline(const int fd, char **fd_arr)
{
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				i;

	while ((i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[i] = '\0';
		tmp = ft_strjoin(fd_arr[fd], buff);
		ft_strdel(&fd_arr[fd]);
		fd_arr[fd] = tmp;
		if (ft_strchr(fd_arr[fd], '\n') != NULL)
			return (1);
	}
	if (i < 0)
		return (-1);
	return (0);
}

static int	dispense_line(char *fd_arr[1024], const int fd, char **line)
{
	char	*ptr;
	char	*tmp_line;

	if ((ptr = ft_strchr(fd_arr[fd], '\n')) != NULL)
	{
		*line = ft_strsub(fd_arr[fd], 0, ptr - fd_arr[fd]);
		tmp_line = ft_strdup(ptr + 1);
		ft_strdel(&fd_arr[fd]);
		fd_arr[fd] = tmp_line;
		return (1);
	}
	else if (ft_strlen(fd_arr[fd]) != 0)
	{
		*line = ft_strdup(fd_arr[fd]);
		ft_strdel(&fd_arr[fd]);
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*fd_arr[1024];
	int			i;

	if (fd < 0 || fd > 1024 || line == NULL || read(fd, 0, 0) < 0)
		return (-1);
	if (fd_arr[fd] == NULL)
		fd_arr[fd] = ft_strnew(0);
	if (fd_arr[fd][0] != '\n')
	{
		i = readline(fd, fd_arr);
		if (i == -1)
			return (-1);
	}
	i = dispense_line(fd_arr, fd, line);
	return (i);
}
