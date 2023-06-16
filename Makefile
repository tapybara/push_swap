# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 19:43:12 by okuyamataka       #+#    #+#              #
#    Updated: 2023/04/28 22:07:38 by okuyamataka      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

HEADER_DIR			= -I./includes/
PRINTF_HEADER_DIR	= -I./ft_printf/includes/
LIBFT_DIR			= -I./ft_printf/libft/
PRINTF_DIR			= ./ft_printf/
PRINTF_LIB			= ./ft_printf/libftprintf.a

SRCS_DIR	= ./src/
SRCS		= $(addprefix ${SRCS_DIR}, ${FILE_NAME})
FILE_NAME	= \
			main.c \
			dclist_utils_add.c\
			dclist_utils_del.c\
			cordinate_compression.c\
			push_swap_utils.c\
			comand_swap.c\
			comand_rotate.c\
			comand_rev_rotate.c\
			sort_case3.c\
			debug_print.c

OBJS = $(SRCS:%.c=%.o)

all:	$(TARGET)

$(TARGET):	$(OBJS) $(PRINTF_LIB)
	$(CC) $^ -o $(TARGET)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) $(HEADER_DIR) $(PRINTF_HEADER_DIR) $(LIBFT_DIR) -o $@ -c $<

$(PRINTF_LIB):
	$(MAKE) -C $(PRINTF_DIR)

clean:
		$(MAKE) clean -C $(PRINTF_DIR)
		rm -f $(OBJS)

fclean:	clean
		$(MAKE) fclean -C $(PRINTF_DIR)
		rm -f $(TARGET)

re:		fclean
		$(MAKE) all

tester:
	make re
	cp libftprintf.a printf-tester
	cd printf-tester/ && ./test.sh && rm -rf libftprintf.a
	make fclean

clone:
