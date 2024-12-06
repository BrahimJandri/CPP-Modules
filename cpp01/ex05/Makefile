CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: harl

harl: $(OBJS)
	$(CXX) $(CXXFLAGS) -o harl $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f harl

re: fclean all

.PHONY: all clean fclean re
