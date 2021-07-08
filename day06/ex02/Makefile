NAME	=	./a.out

INC		=	A.hpp B.hpp Base.hpp C.hpp
SRC		=	main.cpp Base.cpp

CLANG	=	clang++
FLAGS	=	-Wall -Wextra -Werror
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f */*.o
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all