#include "push_swap.h"

void	sort_case3(dclist *head)
{
	dclist	*center;

	center = head->next->next;
	if (center->id == 0)
	{
		if (center->prev->id > center->next->id)
			do_ra(head);
		else
			do_sa(head);
	}
	else if (center->id == 1)
	{
			do_sa(head);
			do_rra(head);
	}
	else if (center->id == 2)
	{
		if (center->prev->id > center->next->id)
			do_rra(head);
		else
		{
			do_sa(head);
			do_ra(head);
		}
	}
}
