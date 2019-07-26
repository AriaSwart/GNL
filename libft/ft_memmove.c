/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:58:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/27 10:10:58 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;
	size_t		n;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (const char *)src;
	if (s1 <= s2)
	{
		n = 0;
		while (n++ < len)
			s1[n - 1] = s2[n - 1];
	}
	else
	{
		n = len;
		while (n > 0)
		{
			s1[n - 1] = s2[n - 1];
			n--;
		}
	}
	return (dst);
}
