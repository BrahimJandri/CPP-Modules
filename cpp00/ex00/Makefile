CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= megaphone.cpp
OBJS=$(SRC:.cpp=.o)

all: megaphone

megaphone: $(OBJS)
	$(CXX) $(CXXFLAGS) -o megaphone $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f megaphone

re:fclean all

