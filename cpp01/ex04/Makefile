CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC= main.cpp readFile.cpp
OBJ=$(SRC:.cpp=.o)

all: readFile

readFile: $(OBJ)
	$(CXX) $(CXXFLAGS) -o readFile $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f readFile

re: fclean all

.PHONY: all clean fclean re