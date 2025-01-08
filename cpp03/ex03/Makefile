CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp 
OBJS = $(SRCS:.cpp=.o)

all: DiamondTrap

DiamondTrap: $(OBJS)
	$(CXX) $(CXXFLAGS) -o DiamondTrap $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f DiamondTrap

re: fclean all

.PHONY: all clean fclean re