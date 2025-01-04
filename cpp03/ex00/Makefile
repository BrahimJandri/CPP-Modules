CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: claptrap

claptrap: $(OBJS)
	$(CXX) $(CXXFLAGS) -o claptrap $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f claptrap

re: fclean all

.PHONY: all clean fclean re