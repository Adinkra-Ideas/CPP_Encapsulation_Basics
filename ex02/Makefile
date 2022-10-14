# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 18:35:20 by euyi              #+#    #+#              #
#    Updated: 2022/10/04 18:08:14 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	dream_job

SRC			=	tests.cpp	Account.cpp

OBJ			=	$(subst .cpp,.o,$(SRC))

LANG		=	c++

FLAGS		=	-Wall -Werror -Wextra	-std=c++98

all:			$(NAME)

$(NAME):		$(OBJ)
				$(LANG)	$(FLAGS)	$(OBJ)	-o	$(NAME)

clean:		
				/bin/rm -f $(OBJ)
				
fclean:			clean
				/bin/rm -f $(NAME)

re:				fclean	all

.PHONY:			all	clean	fclean	re bonus
