#include "push_swap.h"

void	do_rra(dclist *head)
{
	head->next->prev = head->prev;
	head->prev->prev->next = head;
	head->prev->next = head->next;
	head->next = head->prev;
	head->prev = head->prev->prev;
	head->next->prev = head;
	ft_printf("rra\n");
}
