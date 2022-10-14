# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 16:00:10 by euyi              #+#    #+#              #
#    Updated: 2022/10/03 20:49:58 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	main.cpp	MegaPhone.cpp

OBJ		=	$(subst .cpp,.o,$(SRC))

LANG	=	c++

FLAGS	=	-Wall -Werror -Wextra	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(LANG) $(FLAGS) $(OBJ) -o $(NAME)

clean:
			/bin/rm -f $(OBJ)

fclean: clean
			/bin/rm -f $(NAME)

re: 		fclean all

.PHONY:		all	clean	fclean	re bonus
