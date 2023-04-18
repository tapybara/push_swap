/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclist_utils_add.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:32:18 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/03/13 19:09:51 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

dclist   *dclist_new(void)
{
	dclist	*new;

	new = (dclist *)malloc(sizeof(dclist));
	if (!new)
		return (NULL);
	return (new);
}

void    *dclist_add_front(dclist **lst, dlist *node)
{
	if (!lst || !node)
		return (NULL);
	node->next = *lst;
	node->prev = *lst->prev;
	*lst->prev->next = node;
	*lst->prev = node;
	*lst = node;
}

void    *dclist_add_back(dclist **lsthead, int val)
{
	// dclist	*new;
	// dclist	*tail;

	// new = new_dclist();
	// tail = *lsthead;
	// tail->next = new;
	// new->data = val;
	// new->prev = tail;
	// new->next = NULL;
	// *lsthead = new;
}
