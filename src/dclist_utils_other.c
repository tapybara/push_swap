#include "push_swap.h"

int	dclist_count(dclist *head)
{
	dclist	*node;
	int		count;

	node = node->next;
	count = 0;
	while (node != head)
	{
		count++;
		node = node->next;
	}
	return (count);
}
