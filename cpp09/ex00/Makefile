CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)

all: BitcoinExchange

BitcoinExchange: $(OBJ)
	$(CXX) $(CXXFLAGS) -o BitcoinExchange $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf BitcoinExchange

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re