CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: MutantStack

MutantStack: $(OBJ)
	$(CXX) $(CXXFLAGS) -o MutantStack $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf MutantStack

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re