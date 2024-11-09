NAME = PhoneBook
CXX = c++
CXXFLAG = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	$(CXX) $(CXXFLAG) -o $(NAME) $(OBJ)

clean:
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all