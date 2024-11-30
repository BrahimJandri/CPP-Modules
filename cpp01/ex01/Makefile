CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp Zombie.cpp zombieHorde.cpp
OBJ=$(SRC:.cpp=.o)

all: Zombie

Zombie : $(OBJ)
	$(CXX) $(CXXFLAGS) -o Zombie $(OBJ)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f Zombie

re: clean all

.PHONY: all clean fclean re

