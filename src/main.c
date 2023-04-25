/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:01:20 by tokuyama          #+#    #+#             */
/*   Updated: 2023/04/25 23:47:32 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"


void	is_sorted(dclist *stack_a)
{
	dclist	*tail;

	tail = stack_a->prev;
	while (stack_a != tail)
	{
		if (stack_a->data > stack_a->next->data)
		{
			ft_printf("ALREADY SORTED¥n");
			free_stack(stack_a);
			exit (EXIT_FAILURE);
		}
		stack_a = stack_a->next;
	}
}

dclist	*input_to_stack(int ac, char **av)
{
	dclist	*stack_a;
	long	nbr;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		nbr = ft_atol(av[i++]);
		if (nbr < INT_MIN || INT_MAX < nbr)
		{
			ft_printf("INPUT ERROR OF OVER INT_MAX or INT_MIN");
			if (stack_a != NULL)
				free_stack(stack_a);
			exit (EXIT_FAILURE);
		}
		dclist_add_back(stack_a, (int)nbr);
	}
	return (stack_a);
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
	stack_a = input_to_stack(ac, av);
	stack_b = NULL;
	// ソート済み判定
	is_sorted(stack_a)
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
