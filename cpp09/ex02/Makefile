CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)

all: PmergeMe

PmergeMe: $(OBJ)
	$(CXX) $(CXXFLAGS) -o PmergeMe $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf PmergeMe

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re