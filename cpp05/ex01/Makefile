CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)

all: Bureaucrat

Bureaucrat: $(OBJ)
	$(CXX) $(CXXFLAGS) -o Bureaucrat $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf Bureaucrat

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re