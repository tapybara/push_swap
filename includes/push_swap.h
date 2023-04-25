/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:59:40 by tokuyama          #+#    #+#             */
/*   Updated: 2023/04/25 23:50:22 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

# include <limits.h>    // For LONG_MAX&MIN, INT_MAX&MIN
# include <stdlib.h>    
# include <sysexits.h>  // For EXIT RETURN VALUE

typedef struct  dclist{
    int     data;
    struct dclist    *prev;
    struct dclist    *next;
} dclist;

dclist   *dclist_new(int val);
void    *dclist_add_back(dclist *lst, int val);
void	free_stack(dclist *stack);
#endif