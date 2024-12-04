CXX= c++
CXXFLAGS= -Wall -Wextra -Werror

SRC= main.cpp Fixed.cpp
OBJ= $(SRC:.cpp=.o)

all: Fixed

Fixed: $(OBJ)
	$(CXX) $(CXXFLAGS) -o Fixed $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f Fixed

re: fclean all

.PHONY: all clean fclean re