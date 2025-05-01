CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: Array

Array: $(OBJ)
	$(CXX) $(CXXFLAGS) -o Array $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -rf Array

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re