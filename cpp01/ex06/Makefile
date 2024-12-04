CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp Harl.cpp
OBJ= $(SRC:.cpp=.o)

all: harlFilter

harlFilter: $(OBJ)
	$(CXX) $(CXXFLAGS) -o harlFilter $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f harlFilter

re: fclean all

.PHONY: all clean fclean re