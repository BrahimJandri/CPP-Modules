CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: ScavTrap

ScavTrap: $(OBJS)
	$(CXX) $(CXXFLAGS) -o ScavTrap $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ScavTrap

re: fclean all

.PHONY: all clean fclean re