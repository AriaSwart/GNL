/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:45:00 by tswart            #+#    #+#             */
/*   Updated: 2019/06/11 12:23:14 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ls1;
	t_list *ls2;

	ls1 = *alst;
	while (ls1)
	{
		ls2 = ls1->next;
		del(ls1->content, ls1->content_size);
		free(ls1);
		ls1 = ls2;
	}
	*alst = NULL;
}
