/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclist_utils_del.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:28:52 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/04/18 23:46:01 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstsize(dclist *lsthead)
{
	int	size;

	size = 0;
	while (lsthead->next != NULL)
	{
		lsthead = lsthead->next;
		size++;
	}
	return (size);
}
