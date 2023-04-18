/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:59:40 by tokuyama          #+#    #+#             */
/*   Updated: 2023/03/13 18:29:47 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

# include <limits.h>
# include <stdlib.h>

typedef struct  dclist{
    int     data;
    struct dclist    *prev;
    struct dclist    *next;
} dclist;

#endif