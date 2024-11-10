CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: phonebook

phonebook: $(OBJ)
	$(CXX) $(CXXFLAGS) -o phonebook $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f phonebook

re: fclean all

.PHONY: all clean fclean re
