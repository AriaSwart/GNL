/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:11:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/27 13:14:43 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		n;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (s[i] && f)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
