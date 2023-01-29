# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:46:18 by rimarque          #+#    #+#              #
#    Updated: 2023/01/20 17:33:27 by rimarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_print_cs.c \
		ft_print_iduxXp.c \
		ft_printf.c

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re