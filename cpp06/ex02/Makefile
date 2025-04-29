CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address


SRC = main.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)

all: identify

identify: $(OBJ)
	$(CXX) $(CXXFLAGS) -o identify $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf identify

re: fclean all

.SECONDARY:
.PHONY:all clean fclean re