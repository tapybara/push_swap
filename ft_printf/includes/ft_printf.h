/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:59:03 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/02/15 23:02:48 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>

# define CONVERT_SPEC "cspdiuxX%"
# define HEXA_BASE 16

typedef struct s_print
{
	va_list	args;
	int		dash;
	int		zero;
	int		dot;
	int		space;
	int		plus;
	int		prefix;
	int		width;
	int		prec;
	bool	is_negative;
	bool	is_upper;
	bool	is_empty_char;
	bool	is_warning;
	bool	is_print_full;
	int		tl;
}	t_print;

void	init_tab(t_print *tab);
int		ft_printf(const char *format, ...);
int		eval_start(t_print *tab, const char *format, int i);
int		eval_start(t_print *tab, const char *format, int i);
void	eval_flags(t_print *tab, const char *format, int i);
void	count_width_and_precision(t_print *tab, const char *format, int i);
void	eval_convspec(t_print *tab, const char *format, int i);

int		count_base_digits(unsigned long long num, unsigned long long base);
void	ft_print_nbr_with_flags(t_print *tab, char *nbr, int len);
void	ft_print_nbr(t_print *tab, int num);
void	ft_print_uint(t_print *tab, unsigned int num);
void	ft_print_ul_to_hex(t_print *tab, unsigned long long num);
void	ft_print_base_with_flags(t_print *tab, unsigned long long num, int len);
void	ft_print_ptr(t_print *tab, void *p);
void	ft_print_hex(t_print *tab, unsigned int num);
int		ft_putchar(t_print *tab, int c);
int		ft_putstr(t_print *tab, char *str);
void	ft_print_char(t_print *tab, int c);
void	ft_print_str(t_print *tab, char *str);
void	ft_print_str_with_flags(t_print *tab, char *str, int len);

bool	is_empty_char_required(t_print *tab, bool num_zero);
void	fill_the_margin(t_print *tab, int len);

#endif