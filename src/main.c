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

void	is_sorted(dclist *head)
{
	dclist *node;

	node = head;
	while (node->next != head)
	{
		if (node->data > node->next->data)
			return ;
		node = node->next;
	}
	ft_printf("ERROR: ALREADY SORTED\n");
	free_stack(head);
	exit (EXIT_FAILURE);
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

	// 引数不足の判定
	if (ac < 3)
		exit(EX_USAGE);
	// 無効な入力判定
	is_invalid_input(ac, av);
	// 入力データを双方向循環リストに格納
	stack_a = dclist_new();
	stack_b = dclist_new();
	input_to_stack(stack_a, ac, av);
	// ソート済み判定
	is_sorted(stack_a);
	// 座標圧縮
	cordinate_compression(ac, stack_a);
	// ソート処理
	if (ac == 3)
		ft_printf("SIZE = 2\n");
		// do_sa(stack_a);
	else if (ac == 4)
		ft_printf("SIZE = 3\n");
	else if (ac <= 7)
		ft_printf("SIZE = 4-6\n");
	else
		ft_printf("SIZE = OVER SIX\n");
	// スタックメモリ解放
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
