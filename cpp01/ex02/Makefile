CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC= main.cpp
OBJ=$(SRC:.cpp=.o)

all: a.out

a.out : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re