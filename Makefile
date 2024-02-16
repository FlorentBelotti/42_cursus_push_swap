# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 16:48:03 by fbelotti          #+#    #+#              #
#    Updated: 2024/02/12 16:48:07 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	pile_interchanger.c \
		pile_memory_management.c \
		pile_operations.c \
		pile_swapper.c \
		pile_swapper_2.c \
		push_swap_main.c \
		push_swap_split.c \
		push_swap_utils.c \
		sort_rotation.c \
		sort_group.c \
		sort_index.c \
		sort_pile.c \
		tiny_sort.c \
		error_check.c \

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
