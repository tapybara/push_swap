/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyama <tokuyama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:01:20 by tokuyama          #+#    #+#             */
/*   Updated: 2023/03/13 11:31:26 by tokuyama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int main(int ac, char **av)
{
	// 引数が数値でない or intの範囲を超えてたらErrorと表示
	if (ac <= 2)
	{
		ft_printf("Error¥n");
		return (0);
	}
	else if (ac <= 3)
	{
		return (0);
	}
	else if (ac <= 6)
	{
		return (0);
	}
	else
	{
		return (0);
	}
	return (1);
}
