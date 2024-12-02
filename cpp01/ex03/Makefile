CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
OBJ=$(SRC:.cpp=.o)

all: voilence

voilence : $(OBJ)
	$(CXX) $(CXXFLAGS) -o voilence $(OBJ)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f voilence

re: fclean all

.PHONY: all clean fclean re