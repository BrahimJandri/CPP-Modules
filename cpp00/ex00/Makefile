NAME=megaphone
SRC= megaphone.cpp
CPP= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

OBJS=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean all