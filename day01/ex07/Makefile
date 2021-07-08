# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 19:51:33 by budelphi          #+#    #+#              #
#    Updated: 2021/06/24 15:08:07 by budelphi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	mySed

SRC		=	main.cpp 

CLANG	= clang++
FLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRC:.cpp=.o)

%.o:	%.cpp
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
