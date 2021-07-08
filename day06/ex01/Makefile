NAME	=	a.out

SRC		=	main.cpp 

CLANG	=	clang++
FLAGS	=	-Wall -Wextra -Werror

OBJS	= $(SRC:.cpp=.o)

.cpp.o:
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
