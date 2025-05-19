CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)

all: RPN

RPN: $(OBJ)
	$(CXX) $(CXXFLAGS) -o RPN $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf RPN

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re