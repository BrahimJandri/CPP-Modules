CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

all : Account

Account : $(OBJ)
	$(CXX) $(CXXFLAGS) -o Account $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f Account

re : clean all

.PHONY : all clean fclean re