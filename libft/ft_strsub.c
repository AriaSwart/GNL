/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:51:06 by tswart            #+#    #+#             */
/*   Updated: 2019/05/29 08:09:24 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (s == NULL || start > ft_strlen((char *)s) ||
			(new = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (0);
	while (i++ < len && s[start] != '\0')
		new[i - 1] = s[start + i - 1];
	new[i - 1] = '\0';
	return (new);
}
