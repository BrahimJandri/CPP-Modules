CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3	-fsanitize=address

NAME = materia

SRCS = main.cpp ./src/AMateria.cpp ./src/Ice.cpp ./src/Cure.cpp ./src/Character.cpp ./src/MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re