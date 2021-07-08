NAME	=	a.out

INC		=	ScalarConversion.hpp

SRC		=	main.cpp \
			ScalarConversion.cpp

CLANG	=	clang++
FLAGS	=	-Wall -Wextra -Werror

OBJS	= $(SRC:.cpp=.o)

.cpp.o:
	$(CLANG) $(FLAGS) -o $@ -c $< -I.$(INC)

$(NAME): $(OBJS)
	$(CLANG) $(OBJS) -o $(NAME) -I.$(INC)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
