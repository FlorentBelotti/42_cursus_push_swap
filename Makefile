# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 13:47:38 by fbelotti          #+#    #+#              #
#    Updated: 2024/06/19 14:30:21 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
AUTHOR = Florent Belotti

CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g -O0

SRCDIR = Src
INCDIR = Includes
OBJDIR = Obj

SRC = $(shell find $(SRCDIR) -name \*.c -type f -print)

OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

DEPS = $(OBJ:.o=.d)

INCLUDES = -I$(INCDIR)

all: intro $(NAME)

intro:
	@echo "\n==================================="
	@echo "Compiling:	$(NAME)"
	@echo "Author:		$(AUTHOR)"
	@echo "===================================\n"

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "\npush_swap:	ready to run.\n"

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/push_swap.h
	@mkdir -p $(OBJDIR)
	@echo push_swap:	Src:	compiling file $@
	@$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

-include $(DEPS)

clean:
	@echo "push_swap: clean: Cleaning object files..."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "push_swap: fclean: Cleaning all build files..."
	@rm -f $(NAME)

re: fclean all

debug: CFLAGS += $(DEBUG_FLAGS)
debug: re

.PHONY: all clean fclean re debug intro
