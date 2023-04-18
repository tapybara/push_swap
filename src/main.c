/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:01:20 by tokuyama          #+#    #+#             */
/*   Updated: 2023/04/18 23:42:37 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int main(int ac, char **av)
{
	if (ac == 1)
	// 何もしない
		return (0);
	if (ac == 2)
	{
	// 引数が数値でない or intの範囲を超えてたらErrorと表示
		ft_printf("Error¥n");
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
