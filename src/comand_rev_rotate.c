#include "push_swap.h"

void	do_reverse_rotate(dclist *head)
{
	head->next->prev = head->prev;
	head->prev->prev->next = head;
	head->prev->next = head->next;
	head->next = head->prev;
	head->prev = head->prev->prev;
	head->next->prev = head;
	if (head->symbol == 'a')
		ft_printf("rra\n");
	if (head->symbol == 'b')
		ft_printf("rrb\n");
}
