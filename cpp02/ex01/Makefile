CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

all: fixed_point

fixed_point: $(OBJS)
	$(CXX) $(CXXFLAGS) -o fixed_point $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f fixed_point

re: fclean all

.PHONY: all clean fclean re