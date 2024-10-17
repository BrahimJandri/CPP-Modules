CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = phonebook
SOURCES = main.cpp PhoneBook.cpp Contact.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)
re: clean all

.PHONY: all clean re