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

FT_FUNCTIONS = ft_print_cs.c \
               ft_print_iduxXp.c \
               ft_printf.c

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

OBJ = $(FT_FUNCTIONS:.c=.o)
	
%.o: %.c
	@cc $(FLAGS) -c $< -o $@
RM = rm -f
	
all: $(NAME)

$(NAME): $(0BJ)
	@ar rcs $(NAME) $(OBJ)
clean:
	@$(RM) $(OBJ)
	@$(RM) a.out
	@$(RM) libftprintf.h.gch
	@$(RM) libftprintf.so

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
