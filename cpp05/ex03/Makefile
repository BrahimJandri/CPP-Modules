CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp Intern.cpp
OBJ = $(SRC:.cpp=.o)

all: Forms

Forms: $(OBJ)
	$(CXX) $(CXXFLAGS) -o Forms $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf Forms

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re