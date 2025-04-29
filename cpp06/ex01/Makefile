CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp Serializer.cpp
OBJ = $(SRC:.cpp=.o)

all: serializer

serializer: $(OBJ)
	$(CXX) $(CXXFLAGS) -o serializer $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf serializer

re: fclean all

.SECONDARY:
.PHONY:all clean fclean re