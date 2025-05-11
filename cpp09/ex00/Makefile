CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)

all: btc

btc: $(OBJ)
	$(CXX) $(CXXFLAGS) -o btc $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf btc

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re