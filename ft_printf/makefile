# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:46:18 by rimarque          #+#    #+#              #
#    Updated: 2023/01/18 15:00:31 by rimarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

OBJ = $(FT_FUNCTIONS:.c=.o)

RM = rm -f
	
FT_FUNCTIONS =

all: $(NAME)

$(NAME): $(0BJ)
	ar -rcs $(NAME) $(OBJ)
clean:
	make clean ./libft
	$(RM) $(OBJ)
	$(RM) a.out
	$(RM) libftprintf.h.gch
	$(RM) libftprintf.so

fclean: clean
	make fclean ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
