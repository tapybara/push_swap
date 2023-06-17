#include "push_swap.h"

void	sort_case3(dclist *head)
{
	dclist	*center;
	int		min_id;
	int		max_id;

	min_id = get_min_id(head);
	max_id = get_max_id(head);
	center = head->next->next;
	if (center->id == min_id)
	{
		if (center->prev->id > center->next->id)
			do_rotate(head);
		else
			do_swap(head);
	}
	else if (center->id == max_id)
	{
		if (center->prev->id > center->next->id)
			do_reverse_rotate(head);
		else
		{
			do_swap(head);
			do_rotate(head);
		}
	}
	else
	{
			do_swap(head);
			do_reverse_rotate(head);
	}
}

void	sort_case_6_or_less(dclist *stack_a, dclist *stack_b, int size)
{
	int		serch_id;
	int		min_pos;

	serch_id = 0;
	while (size-- > 3)
	{
		min_pos = get_min_pos_and_rotate_direction(stack_a, serch_id++);
		if (min_pos >= 0)
		{
			while (min_pos--)
				do_rotate(stack_a);
		}
		else if (min_pos < 0)
		{
			while (min_pos++)
				do_reverse_rotate(stack_a);			
		}
		do_push(stack_a, stack_b);
	}
	sort_case3(stack_a);
	while (stack_b->next != stack_b)
		do_push(stack_b, stack_a);
}

int	get_min_pos_and_rotate_direction(dclist *head, int serch_id)
{
	dclist	*node;
	int		rotate_count;
	int		rotate_count_rev;
	
	node = head->next;
	if (node == head->prev || node == head)
		return (0);
	rotate_count = 0;
	while (node != head && node->id != serch_id)
	{
		node = node->next;
		rotate_count++;
	}
	node = head->prev;
	rotate_count_rev = -1;
	while (node != head && node->id != serch_id)
	{
		node = node->prev;
		rotate_count_rev--;
	}
	if (rotate_count <= rotate_count_rev * -1)
		return (rotate_count);
	else
		return (rotate_count_rev);
}
