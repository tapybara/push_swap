/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:59:40 by tokuyama          #+#    #+#             */
/*   Updated: 2023/04/28 22:47:44 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>    // For LONG_MAX&MIN, INT_MAX&MIN
# include <stdlib.h>
# include <sysexits.h>  // For EXIT RETURN VALUE
# include "ft_printf.h"
# include "libft.h"

typedef struct  dclist{
	int     data;
	int     id;
	char    symbol;
	struct dclist    *prev;
	struct dclist    *next;
} dclist;

dclist	*dclist_new(void);
void    dclist_add_back(dclist *head, int val);
void    dclist_add_front(dclist *head, int val);
int		dclist_count(dclist *head);
void	free_stack(dclist *head);
void	free_node(dclist *head);
void	cordinate_compression(int ac, dclist *head);
int     get_max_id(dclist *head);
int     get_min_id(dclist *head);
void	swap_int(int *a, int *b);
void    quick_sort(int *arr, int low, int high);
bool	is_sorted(dclist *head);

void	sort_case3(dclist *head);
void	sort_case_6_or_less(dclist *stack_a, dclist *stack_b, int size);
void	sort_case_over_6(dclist *stack_a, dclist *stack_b);
int	    get_min_pos_and_rotate_direction(dclist *head, int serch_id);

void	do_swap(dclist *stack);
void	do_rotate(dclist *head);
void	do_reverse_rotate(dclist *head);
void	do_push(dclist *before, dclist *after);

void	debug_print(dclist *head);
#endif