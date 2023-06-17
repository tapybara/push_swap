/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comand_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:36:17 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/05/09 22:36:36 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_push(dclist *before, dclist *after)
{
	dclist_add_front(after, before->next->data);
	after->next->id = before->next->id;
	free_node(before);
	if (before->symbol == 'a')
		ft_printf("pb\n");
	if (before->symbol == 'b')
		ft_printf("pa\n");
}
