/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclist_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyama <tokuyama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:03:46 by tokuyama          #+#    #+#             */
/*   Updated: 2023/03/13 12:56:17 by tokuyama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

dclist   *dclist_new(void *data)
{
	dclist	*new;

	new = (dclist *)malloc(sizeof(dclist));
	if (!new)
		return (NULL);
	return (new);
}

void    *dclist_add_front(dclist **lst, int val)
{
	dclist	*new;
	dclist	*tail;

	new = new_dclist();
	tail = *lst;
	tail->next = new;
	new->data = val;
	new->prev = tail;
	new->next = NULL;
	*lst = new;
}
