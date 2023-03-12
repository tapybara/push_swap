/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyama <tokuyama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:03:46 by tokuyama          #+#    #+#             */
/*   Updated: 2023/03/13 01:14:23 by tokuyama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

dlist   *new_dlist(void)
{
	dlist	*new;

	new = (dlist *)malloc(sizeof(dlist));
	return (dlist);
}

void    *dlist_add(dlist **lst, int val)
{
	dlist	*new;
	dlist	*tail;

	new = new_dlist();
	tail = *lst;
	tail->next = new;
	new->data = val;
	new->prev = tail;
	new->next = NULL;
	*lst = new;
}
