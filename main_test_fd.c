/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 08:50:29 by tswart            #+#    #+#             */
/*   Updated: 2019/07/04 11:01:44 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char **argv)
{
	int		fd;
	char	*line;
	size_t	i;
//	int		std;

	i = 0;
//	std = 25;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
			ft_putstr(line);
			ft_putchar('\n');
			i++;
		}
		//ft_putstr("\n\nTotal lines - ");
		//ft_putnbr(i);
		close(fd);
	}
	//while (1);
	return (0);
}
