# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alebross <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 15:17:00 by alebross          #+#    #+#              #
#    Updated: 2021/09/26 15:19:49 by alebross         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
FLAGS		=	-Wall -Wextra -Werror -g -fsanitize=address
SRCS		=	srcs/ft_atoi.c \
		srcs/ft_check_args.c \
		srcs/ft_checkdouble.c \
		srcs/ft_count_op.c \
		srcs/ft_do_op.c \
		srcs/ft_error.c \
		srcs/ft_first_p.c \
		srcs/ft_get_args.c \
		srcs/ft_get_loc.c \
		srcs/ft_get_pos_min.c \
		srcs/ft_init_op.c \
		srcs/ft_is_num.c \
		srcs/ft_is_sort.c \
		srcs/ft_is_space.c \
		srcs/ft_min_to_summit.c \
		srcs/ft_plusun.c \
		srcs/ft_push.c \
		srcs/ft_putchar.c \
		srcs/ft_putnbr.c \
		srcs/ft_putpile.c \
		srcs/ft_putstr.c \
		srcs/ft_rotate.c \
		srcs/ft_rrotate.c \
		srcs/ft_sort3num.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c \
		srcs/push_swap.c \

OBJS		=	$(SRCS:.c=.o)

PATHINC		=	includes/

all		: $(NAME)

$(NAME)	:	$(OBJS)
			clang $(FLAGS) -o $(NAME) $(OBJS) -I $(PATHINC)

clean	:
			rm -f $(OBJS) $(OBJSBNS)

fclean	:	clean
			rm -f $(NAME)

%.o 	:	%.c
		clang ${FLAGS} -c $< -o $@
re		: fclean all

.PHONY	: all clean fclean re
