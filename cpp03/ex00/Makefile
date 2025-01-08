CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: ClapTrap

ClapTrap: $(OBJS)
	$(CXX) $(CXXFLAGS) -o ClapTrap $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ClapTrap

re: fclean all

.PHONY: all clean fclean re