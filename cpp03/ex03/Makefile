CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: FragTrap

FragTrap: $(OBJS)
	$(CXX) $(CXXFLAGS) -o FragTrap $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f FragTrap

re: fclean all

.PHONY: all clean fclean re