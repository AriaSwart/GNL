/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:55:37 by tswart            #+#    #+#             */
/*   Updated: 2019/05/24 10:56:49 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;
	size_t i;

	n = 0;
	i = 0;
	if (needle[n] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + n] == needle[n] &&
				needle[n] != '\0' && (i + n) < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		n = 0;
		i++;
	}
	return (0);
}
