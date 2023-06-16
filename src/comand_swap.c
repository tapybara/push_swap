/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comand_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:36:12 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/05/09 22:36:13 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(dclist *stack)
{
	dclist	*node;

	node = stack->next;
	swap_int(&(node->id), &(node->next->id));
	swap_int(&(node->data), &(node->next->data));
	ft_printf("sa\n");
}

void	do_sb(dclist *stack)
{
	dclist	*node;

	node = stack->next;
	swap_int(&(node->id), &(node->next->id));
	swap_int(&(node->data), &(node->next->data));
	ft_printf("sb\n");
}

void	do_ss(dclist *stack_a, dclist *stack_b)
{
	do_sa(stack_a);
	do_sb(stack_b);
	ft_printf("ss\n");
}
