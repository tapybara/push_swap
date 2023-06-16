#include "push_swap.h"

void	do_ra(dclist *head)
{
	head->prev->next = head->next;
	head->next->next->prev = head;
	head->next->prev = head->prev;
	head->prev = head->next;
	head->next = head->next->next;
	head->prev->next = head;
	ft_printf("ra\n");
}
