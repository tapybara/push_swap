/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclist_utils_add.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:32:18 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/04/28 22:47:43 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

dclist   *dclist_new(void)
{
	dclist	*new;

	new = (dclist *)malloc(sizeof(dclist));
	if (!new)
		return (NULL);
	new->prev = new;
	new->next = new;
	return (new);
}

void    dclist_add_back(dclist *head, int val)
{
	dclist	*new;
	dclist	*tail;

	new = dclist_new();
	new->data = val;
	if (head->next == head)
	{
		new->prev = head;
		new->next = head;
		head->next = new;
		head->prev = new;
	}
	else
	{
		tail = head->prev;
		tail->next = new;
		head->prev = new;
		new->prev = tail;
		new->next = head;
	}
}

void    dclist_add_front(dclist *head, int val)
{
	dclist	*new;

	new = dclist_new();
	new->data = val;
	
	new->prev = head;
	new->next = head->next;
	head->next->prev = new;
	head->next = new;
}
