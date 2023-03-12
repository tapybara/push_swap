/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:59:40 by tokuyama          #+#    #+#             */
/*   Updated: 2023/03/12 14:10:29 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

typedef struct  dlist{
    int     data;
    struct dlist    *prev;
    struct dlist    *next;
} dlist;



#endif