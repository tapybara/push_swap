/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyama <tokuyama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:59:40 by tokuyama          #+#    #+#             */
/*   Updated: 2023/03/13 13:05:00 by tokuyama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

typedef struct  dclist{
    int     data;
    struct dclist    *prev;
    struct dclist    *next;
} dclist;

#endif