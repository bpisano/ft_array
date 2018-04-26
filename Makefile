# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/03/28 14:15:58 by bpisano      #+#   ##    ##    #+#        #
#    Updated: 2018/04/26 16:53:45 by bpisano     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libarray.a

SRC = ar_init.c				\
	  ar_init_values.c		\
	  ar_count.c			\
	  ar_cpy.c				\
	  ar_append.c			\
	  ar_append_values.c	\
	  ar_remove_at.c		\
	  ar_remove_first.c		\
	  ar_remove_last.c		\
	  ar_joined.c			\
	  ar_print.c			\

OBJECTS = $(SRC:.c=.o)

PRINTF = ./libftprintf.a

HEADS = ./					\

FLAGS = -Wall -Werror -Wextra

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
END = \033[0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@echo "$(BLUE)$(NAME)\033[500D\033[42C$(GREEN)[DONE]$(END)"

%.o : %.c
	@echo "Compiling $(notdir $@) \033[500D\033[42C$(RED)[KO]$(END)"
	@gcc -I $(HEADS) $(FLAGS) -o $@ -c $<
	@echo "\033[1A\033[500D\033[42C$(GREEN)[DONE]$(END)"

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
