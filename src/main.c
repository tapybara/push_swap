/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:01:20 by tokuyama          #+#    #+#             */
/*   Updated: 2023/05/09 22:25:02 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(dclist *head)
{
	dclist *node;

	node = head;
	while (node->next != head)
	{
		if (node->data > node->next->data)
			return (false);
		node = node->next;
	}
	return	(true);
}

dclist	*input_to_stack(dclist *head, int ac, char **av)
{
	long	nbr;
	int		i;

	i = 1;
	while (i < ac)
	{
		nbr = ft_atol(av[i++]);
		if (nbr < INT_MIN || INT_MAX < nbr)
		{
			ft_printf("ERROR: CONTAIN OVER INT_MAX or INT_MIN\n");
			free_stack(head);
			exit (EXIT_FAILURE);
		}
		dclist_add_back(head, (int)nbr);
	}
	if (is_sorted(head))
	{
		ft_printf("ERROR: ALREADY SORTED\n");
		free_stack(head);
		exit (EXIT_FAILURE);
	}
	return (head);
}

void	is_invalid_input(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while(++i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			// ft_printf("%c\n",av[i][j]);
			if (ft_isdigit(av[i][j]) || (av[i][j] == '-'))
				j++;
			else
			{
				ft_printf("ERROR: INVALID INPUT NOT DIGIT\n");
				exit(EXIT_FAILURE);
			}
		}
		j = i;
		while(++j < ac)
		{
			// ft_printf("[%s] vs [%s]\n",av[i], av[j]);
			if(!ft_strcmp(av[i], av[j]))
			{
				ft_printf("ERROR: INVALID INPUT DUPLICATE INPUT\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}

int main(int ac, char **av)
{
	dclist	*stack_a; 
	dclist	*stack_b;

	if (ac < 3)
		exit(EX_USAGE);
	is_invalid_input(ac, av);
	stack_a = dclist_new();
	stack_a->symbol = 'a';
	input_to_stack(stack_a, ac, av);
	stack_b = dclist_new();
	stack_b->symbol = 'b';
	cordinate_compression(ac, stack_a);
	debug_print(stack_a);	//For Debug
	if (ac == 3)
		do_swap(stack_a);
	else if (ac == 4)
		sort_case3(stack_a);
	else if (ac <= 7)
		sort_case_6_or_less(stack_a, stack_b, ac - 1);
	else
		// sort_case_over_6(stack_a, stack_b);
		ft_printf("OVER SIX\n");
	debug_print(stack_a);	//For Debug
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
