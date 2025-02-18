CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJ = $(SRC:.cpp=.o)

all: Form

Form: $(OBJ)
	$(CXX) $(CXXFLAGS) -o Form $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf Form

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re