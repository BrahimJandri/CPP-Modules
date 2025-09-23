# C++ Modules

![C++](cpp.png)

A comprehensive collection of C++ exercises and projects designed to master Object-Oriented Programming concepts and advanced C++ features. This repository contains 10 modules (cpp00 through cpp09) with progressively challenging exercises that cover fundamental to advanced C++ programming concepts.

## 📚 Repository Overview

This repository is part of the 42 School curriculum and focuses on learning C++ programming from the ground up. Each module builds upon the previous one, introducing new concepts and reinforcing previously learned material.

### 🎯 Learning Objectives

- Master Object-Oriented Programming principles (Encapsulation, Inheritance, Polymorphism, Abstraction)
- Understand C++98 standard and its constraints
- Learn memory management and RAII principles
- Practice advanced C++ features (Templates, STL, Exception Handling)
- Develop clean, efficient, and maintainable C++ code

## 📁 Repository Structure

```
CPP-Modules/
├── cpp00/          # Namespaces, classes, member functions, stdio streams, initialization lists, static, const
├── cpp01/          # Memory allocation, pointers to members, references, switch statement
├── cpp02/          # Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form
├── cpp03/          # Inheritance
├── cpp04/          # Subtype polymorphism, abstract classes, interfaces
├── cpp05/          # Repetition and Exceptions
├── cpp06/          # C++ casts
├── cpp07/          # C++ templates
├── cpp08/          # Templated containers, iterators, algorithms
├── cpp09/          # STL
├── grademe.sh      # Automated testing script
├── GRADEME_README.md  # Documentation for the grading script
└── OOP_THEORY.md   # Object-Oriented Programming theory and concepts
```

## 🚀 Quick Start

### Prerequisites

- Unix-like environment (Linux, macOS)
- C++ compiler supporting C++98 standard (g++ or clang++)
- Make utility
- Bash shell

### Compilation

Each exercise contains a `Makefile` for easy compilation:

```bash
# Navigate to any exercise directory
cd cpp00/ex00

# Compile the project
make

# Run the executable (name varies by exercise)
./megaphone

# Clean build artifacts
make clean

# Clean everything including executables
make fclean

# Recompile everything
make re
```

### Automated Testing

Use the provided grading script to test all exercises at once:

```bash
# Make the script executable
chmod +x grademe.sh

# Run automated tests for all modules
./grademe.sh
```

For detailed information about the grading script, see [GRADEME_README.md](GRADEME_README.md).

## 📖 Module Breakdown

### CPP Module 00 - Introduction to C++
**Topics:** Namespaces, classes, member functions, stdio streams, initialization lists, static, const

| Exercise | Description |
|----------|-------------|
| ex00 | Megaphone - Basic string manipulation and uppercase conversion |
| ex01 | My Awesome PhoneBook - Introduction to classes and interactive programs |
| ex02 | The Job Of Your Dreams - Working with classes and member functions |

### CPP Module 01 - Memory and References
**Topics:** Memory allocation, pointers to members, references, switch statement

| Exercise | Description |
|----------|-------------|
| ex00 | BraiiiiiiinnnzzzZ - Dynamic memory allocation and destructors |
| ex01 | Moar brainz! - Memory allocation for arrays |
| ex02 | HI THIS IS BRAIN - Understanding pointers and references |
| ex03 | Unnecessary violence - References as class members |
| ex04 | Sed is for losers - File manipulation and string replacement |
| ex05 | Harl 2.0 - Switch statements and function pointers |
| ex06 | Harl filter - Command line arguments and filtering |

### CPP Module 02 - Operator Overloading
**Topics:** Ad-hoc polymorphism, operator overloading, Orthodox Canonical class form

| Exercise | Description |
|----------|-------------|
| ex00 | My First Class in Orthodox Canonical Form - Basic class structure |
| ex01 | Towards a more useful fixed-point number class - Operator overloading |
| ex02 | Now we're talking - Advanced operator overloading |
| ex03 | BSP - Binary Space Partitioning with custom classes |

### CPP Module 03 - Inheritance
**Topics:** Inheritance, derived classes, virtual functions

| Exercise | Description |
|----------|-------------|
| ex00 | Aaaaand... OPEN! - Basic inheritance |
| ex01 | Serena, my love! - Protected members and inheritance |
| ex02 | Repetitive work - Virtual inheritance |
| ex03 | Now it's weird! - Diamond inheritance problem |

### CPP Module 04 - Polymorphism
**Topics:** Subtype polymorphism, abstract classes, interfaces

| Exercise | Description |
|----------|-------------|
| ex00 | Polymorphism - Virtual functions and polymorphism |
| ex01 | I don't want to set the world on fire - Deep copy and virtual destructors |
| ex02 | Abstract class - Pure virtual functions and abstract classes |
| ex03 | Interface & recap - Interfaces and multiple inheritance |

### CPP Module 05 - Exceptions
**Topics:** Try/catch blocks, exception handling, custom exceptions

| Exercise | Description |
|----------|-------------|
| ex00 | Mommy, when I grow up, I want to be a bureaucrat! - Basic exceptions |
| ex01 | Form up, maggots! - Custom exception classes |
| ex02 | No, you need form 28B, not 28C... - Nested try-catch blocks |
| ex03 | At least this beats coffee-making - Complex exception hierarchies |

### CPP Module 06 - C++ Casts
**Topics:** static_cast, dynamic_cast, const_cast, reinterpret_cast

| Exercise | Description |
|----------|-------------|
| ex00 | Conversion of scalar types - Type conversions and casting |
| ex01 | Serialization - Object serialization using reinterpret_cast |
| ex02 | Identify real type - Runtime type identification with dynamic_cast |

### CPP Module 07 - Templates
**Topics:** Function templates, class templates, template specialization

| Exercise | Description |
|----------|-------------|
| ex00 | Start with a few functions - Function templates |
| ex01 | Iter - Template functions with iterators |
| ex02 | Array - Class templates and template parameters |

### CPP Module 08 - STL Containers
**Topics:** Templated containers, iterators, algorithms

| Exercise | Description |
|----------|-------------|
| ex00 | Easy find - STL algorithms and containers |
| ex01 | Span - Custom container classes |
| ex02 | Mutated abomination - Adapting STL containers |

### CPP Module 09 - Advanced STL
**Topics:** Advanced STL usage, complex data structures

| Exercise | Description |
|----------|-------------|
| ex00 | Bitcoin Exchange - File parsing and STL maps |
| ex01 | Reverse Polish Notation - Stack-based calculations |
| ex02 | PmergeMe - Advanced sorting algorithms and performance comparison |

## ⚙️ Compilation Standards

All exercises are compiled with the following flags:
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

### Important Notes:
- **C++98 Standard**: All code must be compatible with C++98
- **No external libraries**: Only standard library functions are allowed
- **Orthodox Canonical Form**: Classes should implement the "Rule of Three" when applicable
- **Memory Management**: No memory leaks allowed - proper cleanup required
- **Coding Standards**: Follow 42 School coding standards

## 🧪 Testing

### Manual Testing
Each exercise can be tested individually:
```bash
cd cppXX/exXX
make
./executable_name [arguments]
make fclean
```

### Automated Testing
Use the provided script for comprehensive testing:
```bash
./grademe.sh
```

The script will:
- Compile all exercises
- Run basic functionality tests
- Report success/failure rates
- Provide colored output for easy reading

## 📊 Progress Tracking

Track your progress through the modules:

- [ ] CPP00 - Introduction to C++
- [ ] CPP01 - Memory and References  
- [ ] CPP02 - Operator Overloading
- [ ] CPP03 - Inheritance
- [ ] CPP04 - Polymorphism
- [ ] CPP05 - Exceptions
- [ ] CPP06 - C++ Casts
- [ ] CPP07 - Templates
- [ ] CPP08 - STL Containers
- [ ] CPP09 - Advanced STL

## 🤝 Contributing

If you're working on this repository:

1. **Follow the coding standards**: Adhere to 42 School guidelines
2. **Test thoroughly**: Ensure all exercises compile and run correctly
3. **Document changes**: Update this README if you add new content
4. **No external dependencies**: Keep it compatible with the school environment

## 📋 Requirements

- **Compiler**: g++ or clang++ with C++98 support
- **Build System**: GNU Make
- **OS**: Unix-like system (Linux, macOS)
- **Memory Management**: No leaks allowed (use valgrind for testing)

## 🛠️ Troubleshooting
