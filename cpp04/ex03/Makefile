CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++98

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: Animal_sound

Animal_sound: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o Animal_sound

clean:
	rm -f $(OBJ) Animal_sound

fclean: clean
	rm -f Animal_sound

re: fclean all

.PHONY: all clean fclean re