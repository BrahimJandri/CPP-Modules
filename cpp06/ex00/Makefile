CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)

all: convert

convert: $(OBJ)
	$(CXX) $(CXXFLAGS) -o convert $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf convert

re: fclean all

.SECONDARY:
.PHONY:all clean fclean re