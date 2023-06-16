#include "push_swap.h"

void	debug_print(dclist *head)
{
	dclist	*node;
	
	node = head->next;
	while(node != head)
	{
		ft_printf("ID=%d(Data=%d), ",node->id, node->data);
		node = node->next;
	}
	ft_printf("\n");
}