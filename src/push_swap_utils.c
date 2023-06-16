/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:20:47 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/05/09 22:20:50 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_int(int *a, int *b)
{
	const int	tmp = *a;

	*a = *b;
	*b = tmp;
}

static int	partition_array(int *array, int low, int high)
{
	int	pivot;
    int i;
    int j;

	i = low;
	j = low;
	pivot = array[high];
    while (i < high) {
        if (array[i] < pivot) {
            swap_int(&array[i], &array[j++]);
        }
        i++;
    }
    swap_int(&array[j], &array[high]);
    return (j);
}

void quick_sort(int *array, int low, int high)
{
    if (low < high) {
        int pivot_index = partition_array(array, low, high);

        quick_sort(array, low, pivot_index - 1);
        quick_sort(array, pivot_index + 1, high);
    }
}