# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 13:47:38 by fbelotti          #+#    #+#              #
#    Updated: 2024/02/18 14:50:56 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./Source/pile_interchanger.c \
		./Source/pile_memory_management.c \
		./Source/pile_operations.c \
		./Source/pile_swapper.c \
		./Source/pile_swapper_2.c \
		./Source/push_swap_main.c \
		./Source/push_swap_split.c \
		./Source/push_swap_utils.c \
		./Source/sort_rotation.c \
		./Source/sort_group.c \
		./Source/sort_index.c \
		./Source/sort_pile.c \
		./Source/tiny_sort.c \
		./Source/error_check.c \

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
