/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cordinate_compression.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:21:02 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/05/09 22:21:03 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_id_into_stack(dclist *head, int *array, size_t size)
{
	dclist	*node;
	size_t	i;

	node = head->next;
	while (node != head)
	{
		i = 0;
		while (i < size)
		{
			if (node->data == array[i])
				node->id = i;
			i++;
		}
		node = node->next;
	}
}

void	cordinate_compression(const int ac, dclist *head)
{
	dclist			*node;
	const size_t	size = ac - 1;
	int				sorted_array[size];
	size_t			i;

	node = head->next;
	i = 0;
	while (i < size && node != head)
	{
		sorted_array[i++] = node->data;
		node = node->next;
	}
	quick_sort(sorted_array, 0, size - 1);
	set_id_into_stack(head, sorted_array, size);
}