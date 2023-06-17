#include "push_swap.h"

int	serch_pivot_id(dclist *head)
{
	dclist	*node;
	int		*id_array;
	int		list_size;
	int		pivot_val;
	int		i;

	node = head->next;
	list_size = dclist_count(head);
	id_array = (int *)malloc(list_size * sizeof(int));
	i = 0;
	while (node != head)
	{
		id_array[i] = node->id;
		node = node->next;
	}
	quick_sort(id_array, 0, list_size - 1);
	pivot_val = id_array[list_size / 2];
	free(id_array);
	return (pivot_val);
}

void	push_halved_size(dclist *before, dclist *after)
{
	dclist	*before_node;
	int		pivot;
	
	before_node = before->next;
	pivot = serch_pivot_id(before);
	while (before_node != before)
	{
		if (before->symbol = 'a')
		{
			if (before_node->id <= pivot)
				do_push(before, after);
		}
		else if (before->symbol = 'b')
		{
			if (before_node->id > pivot)
				do_push(before, after);
		}
		before_node = before_node->next;
	}
}

void	sort_case_over_6(dclist *before, dclist *after)
{
	dclist	*stack_a;
	dclist	*stack_b;
	int		b_size;

	push_halved_size(before, after);
	if (before->symbol = 'b')
	{
		stack_a = after;
		stack_b = before;
	}
	else if(after->symbol = 'b')
	{
		stack_a = before;
		stack_b = after;
	}
	b_size = dclist_count(stack_b);
	if (b_size >= 7)
		sort_case_over_6(after, before);
	else
	{	
		if (b_size >= 4)
			sort_case_6_or_less(stack_a, stack_b);
		else if (b_size <= 3)
			sort_case_3(stack_b);
		while (b_size--)
		{
			do_push(stack_b, stack_a);
			do_rotate(stack_a);
		}
	}
	if (is_sorted(stack_a) && dclist_count(stack_b) == 0)
		return ;
}
