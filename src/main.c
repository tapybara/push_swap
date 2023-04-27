/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:01:20 by tokuyama          #+#    #+#             */
/*   Updated: 2023/04/28 00:18:23 by okuyamataka      ###   ########.fr       */
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
	ft_printf("ALREADY SORTED¥n");
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
			ft_printf("INPUT ERROR OF OVER INT_MAX or INT_MIN");
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

	i = 1;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			if (!ft_isdigit(av[i][j]) || !(av[i][j] == '-'))
			{
				ft_printf("INVALID INPUT ERROR - NOT DIGIT¥n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		j = i;
		while(++j < ac)
		{
			if(!ft_strncmp(av[i], av[j]))
			{
				ft_printf("INVALID INPUT ERROR - DUPLICATE INPUT¥n");
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
	// 
	// ソート処理
	if (ac == 3)
		ft_printf("SIZE = 2");
		// do_sa(stack_a);
	else if (ac == 4)
		ft_printf("SIZE = 3");
	else if (ac <= 7)
		ft_printf("SIZE = 4-6");
	else
		ft_printf("SIZE = OVER SIX");
	// スタックメモリ解放
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
