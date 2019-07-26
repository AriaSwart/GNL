/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:36:23 by tswart            #+#    #+#             */
/*   Updated: 2019/06/24 10:41:13 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *nbr)
{
	int	i;
	int	sign;
	int	n;

	sign = 1;
	i = 0;
	n = 0;
	while (ft_isspace(nbr[i]))
		i++;
	if (!nbr)
		return (0);
	if (nbr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nbr[i] == '+')
		i++;
	while ((nbr[i] != '\0') && ('0' <= nbr[i] && nbr[i] <= '9'))
	{
		n = (n * 10) + (nbr[i] - 48);
		i++;
	}
	return (n * sign);
}
