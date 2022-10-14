# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 13:11:18 by euyi              #+#    #+#              #
#    Updated: 2022/10/03 20:35:35 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	map

SRC		=	main.cpp	Contact.cpp	PhoneBook.cpp

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
