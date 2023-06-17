#include "push_swap.h"

void	do_rotate(dclist *head)
{
	head->prev->next = head->next;
	head->next->next->prev = head;
	head->next->prev = head->prev;
	head->prev = head->next;
	head->next = head->next->next;
	head->prev->next = head;
	if (head->symbol == 'a')
		ft_printf("ra\n");
	if (head->symbol == 'b')
		ft_printf("rb\n");
}
