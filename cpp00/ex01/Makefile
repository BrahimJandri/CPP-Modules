CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: PhoneBook

PhoneBook: $(OBJ)
	$(CXX) $(CXXFLAGS) -o PhoneBook $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f PhoneBook

re: fclean all

.PHONY: all clean fclean re
