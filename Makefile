TARGET	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

INCLUDE_DIR	= ./includes/
INCLUDE_FILE= ./includes/push_swap.h
PRINTF_DIR	= ./ft_printf/
PRINTF_INCLUDE_DIR	= ../ft_printf/includes/
PRINTF_LIB	= ./ft_printf/libftprintf.a

SRCS_DIR	= ./src/
SRCS		= $(addprefix ${SRCS_DIR}, ${FILE_NAME})
FILE_NAME	= \
			main.c \
			dclist_utils_add.c\
			dclist_utils_del.c
OBJS = $(SRCS:%.c=%.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJS): $(SRCS) $(PRINTF_LIB)
	$(MAKE) -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) -I${INCLUDE_DIR} -I$(PRINTF_INCLUDE_DIR) $(PRINTF_LIB) -c $(SRCS)

clean:
		$(MAKE) clean -C $(PRINTF_DIR)
		rm -f $(OBJS)

fclean:	clean
		$(MAKE) fclean -C $(PRINTF_DIR)
		rm -f $(TARGET)

re:		fclean
		all

tester:
	make re
	cp libftprintf.a printf-tester
	cd printf-tester/ && ./test.sh && rm -rf libftprintf.a
	make fclean

clone:
