CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++98 -g -fsanitize=address

SRC = ./src/Animal.cpp ./src/Cat.cpp ./src/Dog.cpp main.cpp ./src/WrongAnimal.cpp ./src/WrongCat.cpp
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