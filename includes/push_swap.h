/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:59:40 by tokuyama          #+#    #+#             */
/*   Updated: 2023/04/28 00:20:45 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>    // For LONG_MAX&MIN, INT_MAX&MIN
# include <stdlib.h>    
# include <sysexits.h>  // For EXIT RETURN VALUE
# include "ft_printf.h"

typedef struct  dclist{
    int     data;
    struct dclist    *prev;
    struct dclist    *next;
} dclist;

dclist   *dclist_new(void);
void    dclist_add_back(dclist *head, int val);
void	free_stack(dclist *stack);
#endif