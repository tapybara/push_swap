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

dclist   *dclist_new(int val)
{
	dclist	*new;

	new = (dclist *)malloc(sizeof(dclist));
	if (!new)
		return (NULL);
	new->data = val;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

void    *dclist_add_back(dclist *lst, int val)
{
	dclist	*new;
	dclist	*tail;

	new = dclist_new(val);
	if (lst == NULL)
		lst = new;
	else
	{
		tail = lst->prev;
		tail->next = new;
		lst->prev = new;
		new->prev = tail;
		new->next = lst;
	}
}

int	lstsize(dclist *lst)
{
	int	size;

	size = 0;
	while (lst->next != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
