/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:34:11 by tswart            #+#    #+#             */
/*   Updated: 2019/05/24 15:07:10 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;
	size_t i;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	i = 0;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[i] != '\0' && (dlen + i) < (dstsize - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
