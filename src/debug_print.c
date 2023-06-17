#include "push_swap.h"

void	debug_print(dclist *head)
{
	dclist	*node;
	
	node = head->next;
	while(node != head)
	{
		ft_printf("Data=%d(ID=%d), ",node->data, node->id);
		node = node->next;
	}
	ft_printf("\n");
}