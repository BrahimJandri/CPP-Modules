CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: whatever

whatever: $(OBJ)
	$(CXX) $(CXXFLAGS) -o whatever $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -rf whatever

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re