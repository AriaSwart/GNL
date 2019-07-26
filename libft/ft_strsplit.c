/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:06:14 by tswart            #+#    #+#             */
/*   Updated: 2019/06/11 12:25:10 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			n++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return ((int)n);
}

static int	ft_wlen(const char *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			n++;
		}
	}
	return ((int)n);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	n;
	size_t	t;

	i = 0;
	n = 0;
	if (!s || !c)
		return (NULL);
	if (!(new = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while ((int)i < ft_wordcount(s, c))
	{
		t = 0;
		if (!(new[i] = ft_strnew(ft_wlen(&s[n], c) + 1)))
			new[i] = NULL;
		while (s[n] == c)
			n++;
		while (s[n] != c && s[n])
			new[i][t++] = s[n++];
		new[i++][t] = '\0';
	}
	new[i] = 0;
	return (new);
}
