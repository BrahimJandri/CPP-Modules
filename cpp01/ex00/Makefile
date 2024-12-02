CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: Zombie

Zombie : $(OBJ)
	$(CXX) $(CXXFLAGS) -o Zombie $(OBJ)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f Zombie

re: fclean all

.PHONY: all clean fclean re
