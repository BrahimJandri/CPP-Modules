CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: easyfind

easyfind: $(OBJ)
	$(CXX) $(CXXFLAGS) -o easyfind $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf easyfind

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re