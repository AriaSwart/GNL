/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:40:49 by tswart            #+#    #+#             */
/*   Updated: 2019/05/30 11:19:13 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	size_t				i;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned const char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char)c)
			return ((void *)s1 + i + 1);
		i++;
	}
	return (0);
}
