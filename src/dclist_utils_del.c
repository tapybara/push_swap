/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclist_utils_del.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:28:52 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/04/25 23:50:03 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(dclist *head)
{
	dclist	*node;
	dclist	*tmp;

	node = head->next;
	while (node != head)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	free(node);
	head = NULL;
}
