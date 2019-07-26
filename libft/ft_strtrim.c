/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:11:50 by tswart            #+#    #+#             */
/*   Updated: 2019/06/11 13:28:53 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	n;
	size_t	t;

	i = 0;
	if (!s)
		return (0);
	t = ft_strlen((char *)s);
	while (s[i] != '\0' && ft_isspace(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	while (i < t && ft_isspace(s[t - 1]))
		t--;
	n = t - i;
	return (ft_strsub(s, i, n));
}
