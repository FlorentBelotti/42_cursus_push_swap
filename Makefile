# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 13:47:38 by fbelotti          #+#    #+#              #
#    Updated: 2024/02/10 13:59:01 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	pile_interchanger.c \
		pile_memory_management.c \
		pile_operations.c \
		pile_swapper.c \
		pile_swapper_2.c \
		pile_tester.c \
		push_swap_main.c \
		push_swap_split.c \
		push_swap_utils.c \
		sort_group.c \
		sort_index.c \
		sort_pile_b.c \
		tiny_sort.c \

CC =	gcc
RM =	rm -f
CFLAGS = -Wall -Wextra -Werror -g

NAME =	push_swap

OBJS =	$(SRCS:.c=.o)

${NAME} : $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
