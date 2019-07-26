/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replacechr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 10:29:42 by tswart            #+#    #+#             */
/*   Updated: 2019/06/28 09:44:17 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_replacechr(char **str, char f, char r)
{
	char *ptr;

	if ((ptr = ft_strchr(*str, f)) == NULL)
		return (NULL);
	*ptr = r;
	return (ptr);
}
