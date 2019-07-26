/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 07:44:17 by tswart            #+#    #+#             */
/*   Updated: 2019/05/24 10:57:09 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + n] == needle[n] && needle[n] != '\0')
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		n = 0;
		i++;
	}
	return (0);
}
