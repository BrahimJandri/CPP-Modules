CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: iter

iter: $(OBJ)
	$(CXX) $(CXXFLAGS) -o iter $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -rf iter

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re