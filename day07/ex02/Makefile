NAME	=	./a.out

INC		=	Array.hpp
SRC		=	main.cpp

CLANG	=	clang++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all