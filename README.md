<h1>What is object oriented programming ?</h1>
Before diving into the core of these five first C++ modules let's first understand the basics of what is C++ and more specifically what is *Object Oriented Programming* (OOP).


Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or [objects](https://www.techtarget.com/searchapparchitecture/definition/object), rather than functions and logic. An object can be defined as a data field that has unique attributes and behavior.

OOP focuses on the objects that developers want to manipulate rather than the logic required to manipulate them. This approach to programming is well suited for software that is large, complex and actively updated or maintained. This includes programs for manufacturing and design, as well as mobile applications. For example, OOP can be used for manufacturing system simulation software.

The organization of an object-oriented program also makes the method beneficial for collaborative development, where projects are divided into groups. Additional benefits of OOP include code reusability, scalability and efficiency.

The first step in OOP is to collect all of the objects a programmer wants to manipulate and identify how they relate to each other -- an exercise known as [*data modeling*](https://www.techtarget.com/searchdatamanagement/definition/data-modeling).

Examples of an object can range from physical entities, such as a human being who is described by properties like name and address, to small computer programs, such as [widgets](https://www.techtarget.com/whatis/definition/widget).

Once an object is known, it is labeled with a [class](https://www.techtarget.com/whatis/definition/class) of objects that defines the kind of data it contains and any logic sequences that can manipulate it. Each distinct logic sequence is known as a *method*. Objects can communicate with well-defined interfaces called *messages*.

**What is the structure of object-oriented programming?**

The structure, or building blocks, of object-oriented programming include the following:

- **Classes** are user-defined data types that act as the blueprint for individual objects, attributes and methods.
- **Objects** are instances of a class created with specifically defined data. Objects can correspond to real-world objects or an abstract entity. When class is defined initially, the description is the only object that is defined.
- **Methods** are functions that objects can perform. They are defined inside a class that describe the behaviors of an object. Each method contained in class definitions starts with a reference to an instance object. Additionally, the subroutines contained in an object are called *instance methods*. Programmers use methods for reusability or keeping functionality encapsulated inside one object at a time.
- **Attributes** represent the state of an object. In other words, they are the characteristics that distinguish classes. Objects have data stored in the attributes field. Class attributes belong to the class itself and are defined in the class template.

**What are the main principles of OOP?**

Object-oriented programming is based on the following principles:

- **Encapsulation.** The [encapsulation](https://www.techtarget.com/searchnetworking/definition/encapsulation) principle states that all important information is contained inside an object and only select information is exposed. The implementation and state of each object are privately held inside a defined class. Other objects do not have access to this class or the authority to make changes. They are only able to call a list of public functions or methods. This characteristic of data hiding provides greater program security and avoids unintended data corruption.
- **Abstraction.** Objects only reveal internal mechanisms that are relevant for the use of other objects, hiding any unnecessary implementation code. The derived class can have its functionality extended. This concept can help developers more easily make additional changes or additions over time.
- **Inheritance.** Classes can reuse code and properties from other classes. Relationships and subclasses between objects can be assigned, enabling developers to reuse common logic, while still maintaining a unique hierarchy. Inheritance forces more thorough data analysis, reduces development time and ensures a higher level of accuracy.
- **Polymorphism.** Objects are designed to share behaviors, and they can take on more than one form. The program determines which meaning or usage is necessary for each execution of that object from a parent class, reducing the need to duplicate code. A child class is then created, which extends the functionality of the parent class. [Polymorphism](https://www.techtarget.com/whatis/definition/polymorphism) enables different types of objects to pass through the same interface.
- **Syntax.** This is the set of rules that define how words and punctuation are organized in a programming language.
- **Coupling.** This is the degree to which software elements are connected to one another. For example, if a class has its attributes change, then any other coupled class also changes.
- **Association.** This is the connection between one or more classes. Associations can be one to one, many to many, one to many or many to one.

### **What are the benefits of OOP?**

Benefits of OOP include the following:

- **Modularity.** Encapsulation enables objects to be self-contained, making troubleshooting and collaborative development easier.
- **Reusability.** Code can be reused through inheritance, meaning a team does not have to write the same code multiple times.
- **Productivity.** Programmers can construct new programs quickly through the use of multiple libraries and reusable code.
- **Easily upgradable and scalable.** Programmers can implement system functionalities independently.
- **Interface descriptions.** Descriptions of external systems are simple, due to message-passing techniques that are used for object communication.
- **Security.** Using encapsulation and abstraction, complex code is hidden, software maintenance is easier and internet protocols are protected.
- **Flexibility.** Polymorphism enables a single function to adapt to the class it is placed in. Different objects can also pass through the same interface.
- **Code maintenance.** Parts of a system can be updated and maintained without needing to make significant adjustments.
- **Lower cost.** Other benefits, such as its maintenance and reusability, reduce development costs.

## **Criticism of OOP**

Developers have criticized the object-oriented programming model for multiple reasons. The largest concern is that OOP overemphasizes the data component of software development and does not focus enough on computation or [algorithms](https://www.techtarget.com/whatis/definition/algorithm). Additionally, OOP code may be more complicated to write and take longer to compile.

Other common criticisms include the fact that inheritance comes with drawbacks, such as fragile base classes. Additionally, objects are sometimes more clear while isolated but are harder to understand when operating in the actual program.

Alternative methods to OOP include the following:

- **Functional programming.** This includes languages such as Erlang and Scala, which are used for telecommunications and fault-tolerant systems.
- **Structured or modular programming.** This includes languages such as PHP and C#.
- **Imperative programming.** This alternative to OOP focuses on function rather than models. [Imperative programming](https://www.techtarget.com/whatis/definition/imperative-programming) languages include C++ and Java.
- **Declarative programming.** This programming method involves statements on what the task or desired outcome is but not how to achieve it. [Declarative programming](https://www.techtarget.com/searchitoperations/definition/declarative-programming) languages include Prolog and Lisp.
- **Logical programming.** This method, which is based mostly on formal logic and uses languages such as Prolog, contains a set of sentences that express facts or rules about a problem domain. It focuses on tasks that can benefit from rule-based logical queries.

Most advanced programming languages enable developers to combine models because they can be used for different programming methods. For example, JavaScript and Scala can be used for OOP and functional programming.

### **Key Differences**

| **Aspect** | **Abstraction** | **Encapsulation** |
| --- | --- | --- |
| **Definition** | Hiding implementation details and showing only the functionality. | Hiding data and restricting access to it. |
| **Focus** | Focuses on **what** an object does. | Focuses on **how** data is protected. |
| **Achieved Through** | Abstract classes, interfaces, and pure virtual functions. | Access modifiers (private, protected). |
| **Purpose** | Simplifies interface for users by hiding complexity. | Safeguards data integrity by restricting access. |
| **Example** | Abstract class `Shape` with `draw()` method. | Class `BankAccount` with private `balance` and public `deposit()`/`withdraw()`. |

### **Key Differences Between Compile-Time and Run-Time Polymorphism**

| Feature | Compile-time Polymorphism | Run-time Polymorphism |
| --- | --- | --- |
| **Resolution Time** | At compile time (during compilation) | At run time (during program execution) |
| **How it Works** | Overloading based on types, number of arguments, etc. | Overriding functions with `virtual` functions, resolved dynamically |
| **Use Cases** | Function overloading, operator overloading | Inheritance and virtual functions |
| **Performance** | Generally faster because decisions are made at compile time | Slower due to dynamic dispatch and vtable lookup |
| **Flexibility** | Limited to the overloaded functions' signatures | Highly flexible and extensible via inheritance |
| **Examples** | Function overloading, operator overloading | Virtual functions and inheritance |

### **Function Pointers in C++**

A **function pointer** is a pointer that stores the address of a function. It allows you to call a function indirectly through the pointer. Function pointers are particularly useful for callbacks, dynamic function calls, and implementing polymorphism in scenarios where classes are not needed.

### **Basic Syntax of Function Pointer**

To declare a pointer to a function:

```cpp
return_type (*pointer_name)(parameter_types);
```

- **`return_type`**: The return type of the function the pointer will point to.
- **`(*pointer_name)`**: Declares the pointer.
- **`parameter_types`**: Specifies the types of parameters the function takes.

### **Declaring a Pointer to a Member Function**

The syntax for declaring a pointer to a member function is slightly different from a regular function pointer:

```cpp
ReturnType (ClassName::*PointerName)(ParameterList);
```

- `ReturnType`: The return type of the member function.
- `ClassName`: The class that contains the member function.
- `PointerName`: The name of the pointer to the member function.
- `ParameterList`: The parameters of the member function.

**The** **Orthodox Canonical Class Form (OCCF) :**

is a guideline in C++ for designing classes that ensures they behave correctly in various contexts. It specifies that a class should implement four essential functions:

1. **Default Constructor**: This constructor initializes objects and data members when no other value is provided.
2. **Copy Constructor**: This constructor is used when an object is passed by value, allowing for the creation of a new object as a copy of an existing one.
3. **Assignment Operator**: This operator allows one object to be assigned the value of another, ensuring proper handling of resources.
4. **Destructor**: This function is called when an object is deleted, allowing for cleanup of resources .

### **Why Use the Orthodox Canonical Class Form?**

Implementing the OCCF is crucial for several reasons:

- **Resource Management**: It helps manage resources like dynamic memory, ensuring that resources are properly allocated and deallocated.
- **Object Integrity**: By defining these functions, you ensure that objects maintain their integrity when copied or assigned, preventing issues like double deletion or memory leaks.
- **Consistency**: Following this form leads to more predictable and maintainable code, as it adheres to established conventions in C++ programming.

**Fixed Point :**

A fixed-point number is a way to represent fractional numbers using integer arithmetic. It balances performance, accuracy, range, and precision, making it particularly useful in applications like computer graphics, sound processing, and scientific programming.

### How It Works

1. **Representation**:
    - A fixed-point number uses an integer to store the value.
    - The fractional part is represented by a fixed number of bits (known as fractional bits).
2. **Components**:
    - **Integer Part**: The whole number part of the fixed-point number.
    - **Fractional Part**: The fractional part, represented by a specific number of bits.
    - **Fractional Bits**: The number of bits used for the fractional part. For example, if there are 8 fractional bits, the value of a fixed-point number is scaled by \(2^8 = 256\).
3. **Example**:
    - Let's say you have a fixed-point number with 8 fractional bits.
    - The integer value `256` would represent `1.0` in fixed-point notation because \(256 / 256 = 1.0\).
    - Similarly, the integer value `128` would represent `0.5` because \(128 / 256 = 0.5\).

### Why Use Fixed-Point Numbers?

1. **Performance**:
    - Fixed-point arithmetic is often faster than floating-point arithmetic because it avoids the complexity of floating-point operations.
2. **Precision**:
    - Provides a predictable and consistent precision, as the number of fractional bits is fixed.
3. **Range**:
    - Fixed-point numbers offer a balance between range and precision, making them suitable for applications that require moderate precision and range.

### Application Areas

- **Computer Graphics**: Often used in graphical computations where consistent precision and performance are crucial.
- **Sound Processing**: Useful in digital signal processing where fractional values are common.
- **Embedded Systems**: Frequently used in systems with limited processing power and no floating-point hardware.

Fixed-point numbers are a valuable tool in scenarios where floating-point numbers may be too complex or resource-intensive. They provide a practical balance, making them a favorite in various technical fields. If you'd like to know more or have any questions, feel free to ask! 😊

### Summary of Differences:

| Aspect | Pre-Increment (`operator++()`) | Post-Increment (`operator++(int)`) |
| --- | --- | --- |
| **Increment Timing** | Increment happens **before** returning the value. | Increment happens **after** returning the value. |
| **Return Value** | Returns the **incremented object** (by reference). | Returns the **original object** (by value, as a copy). |
| **Usage** | `++a` | `a++` |
| **Common Use Case** | If you want the result to be the incremented object immediately. | If you want to use the original value first, then increment afterward. |

### **Differences Between Compile Time and Run Time**

| Aspect | **Compile Time** | **Run Time** |
| --- | --- | --- |
| **Timing** | Happens during the compilation process, before the program is executed. | Happens when the program is executed. |
| **Key Operations** | Syntax checking, type checking, overloading resolution, static memory allocation, optimization, linking. | Execution of program code, dynamic memory allocation, input/output operations, exception handling, and dynamic dispatch (virtual functions). |
| **Errors** | Errors are detected by the compiler, such as syntax errors, type mismatches, and undeclared variables. | Errors detected at run time include logic errors, exceptions, and memory allocation failures. |
| **Memory Allocation** | Static memory allocation (for variables known at compile time). | Dynamic memory allocation (for variables and structures allocated during execution). |
| **Function Resolution** | Overloading and operator resolution occur at compile time based on function signatures. | Virtual function calls (polymorphism) are resolved at runtime via dynamic dispatch. |
| **Performance Impact** | Optimizations are done at compile time to improve execution speed. | Performance can be impacted by runtime factors, such as dynamic dispatch and memory usage. |

## **Key Differences Between Virtual Function and Virtual Inheritance**

| Feature | Virtual Functions | Virtual Inheritance |
| --- | --- | --- |
| **Purpose** | Resolve function call ambiguity dynamically at runtime | Resolve multiple inheritance ambiguity |
| **Mechanism** | Uses vtable and vptr for dynamic dispatch | Shares a single base class instance |
| **When to Use** | When overriding base class methods | When dealing with diamond inheritance |
| **Example** | `Base::show()` and `Derived::show()` | `A` inherited by both `B` and `C` |

| Static Function | Non-Static Function |
| --- | --- |
| Does **not** need object | Needs an object to call (has `this` pointer) |
| Can go in function pointer | Needs special pointer-to-member syntax |
| Easier to use in arrays | Harder to use in arrays |
| Feature | Pure Virtual Function (= 0) | Virtual Function (without = 0) |
| Implementation | No implementation in the base class. | Can have an implementation in the base class. |
| Purpose | Enforces that derived classes must provide an implementation. | Allows derived classes to override or use the base class implementation. |
| Instantiation of Base Class | The class becomes abstract and cannot be instantiated. | The class is not abstract and can be instantiated if there are no other pure virtual functions. |
| Usage | Used to define abstract interfaces or to force derived classes to implement the function. | Used when a default implementation is needed, but customization is allowed. |

## **Summary**

| **Aspect** | **Using `std::istringstream` and `>>`** | **Direct string comparison (`line == input2`)** |
| --- | --- | --- |
| Extracts tokens from string | Yes, extracts one token at a time | No, compares entire string only |
| Handles type conversion | Yes, can convert to int, float, etc. | No, only compares strings |
| Allows partial processing | Yes, can process multiple tokens sequentially | No, only full string comparison |
| Useful for parsing input | Yes, ideal for parsing formatted input | No, only for exact match |

Therefore, **`std::istringstream`** is used to **parse and extract tokens or values from a string** safely and conveniently, which cannot be done by simply comparing strings directly[1](https://www.geeksforgeeks.org/processing-strings-using-stdistringstream/)[4](https://www.tutorialspoint.com/how-to-process-strings-using-std-istringstream)[5](https://stackoverflow.com/questions/21814297/how-to-extract-mixed-format-using-istringstream)[8](https://www.reddit.com/r/cpp_questions/comments/6fcxjr/what_is_a_stdstringstream_and_why_does_it_let_me/).

## How Type Casting Works in C++

Type casting in C++ is the process of converting a variable from one data type to another. This can be done either automatically by the compiler (implicit casting) or manually by the programmer (explicit casting). Type casting is crucial for ensuring that operations between different data types are handled correctly and safely[2](https://unstop.com/blog/type-casting-and-type-conversion-in-cpp)[9](https://www.geekster.in/articles/type-casting-in-c/).

**Types of Type Casting in C++**

## 1. Implicit Type Casting (Automatic/Type Promotion)

- **Definition:** The compiler automatically converts one data type to another when it is safe to do so.
- **Example:** Assigning an `int` to a `double` variable will automatically convert the integer to a double.
    
    `cppint myInt = 10;
    double myDouble = myInt; *// Implicitly casts int to double*`
    
- **Trick:** Implicit casting only happens when there is no risk of data loss (e.g., from smaller to larger types)[9](https://www.geekster.in/articles/type-casting-in-c/).

## 2. Explicit Type Casting (Manual)

- **Definition:** The programmer specifies the type conversion using casting operators or C-style casts.
- **Syntax:** There are two main forms:
    - **C-style cast:** `(new_type)expression`
    - **C++ cast operators:** `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast`

## Types of Explicit Casts

| Cast Type | Purpose/Use Case | Syntax Example | Trick/Notes |
| --- | --- | --- | --- |
| **C-style Cast** | Traditional C way to cast between types. | `(int)myDouble` | Quick but unsafe; no type checking. |
| **static_cast** | Converts between related types (e.g., int ↔ float, base ↔ derived pointers). | `static_cast<int>(myDouble)` | Safer than C-style; compile-time checks; use for most numeric and pointer up/downcasting. |
| **dynamic_cast** | Safe cast for polymorphic types (classes with virtual functions), mainly pointers | `dynamic_cast<Derived*>(basePtr)` | Returns `nullptr` if cast fails; use for safe downcasting in class hierarchies. |
| **const_cast** | Adds or removes `const` or `volatile` qualifiers. | `const_cast<int*>(constPtr)` | Only use to cast away constness; changing const data is undefined behavior. |
| **reinterpret_cast** | Reinterprets the bit pattern of a value as another type (e.g., int* ↔ float*). | `reinterpret_cast<float*>(intPtr)` | Dangerous; no type safety; use only when absolutely necessary. |

## **Details and Tricks for Each Cast**

## **C-Style Cast**

- **Usage:** `(type)expression`
- **Trick:** Fast and concise, but potentially dangerous because it can perform any type of cast, including those that may not be safe[1](https://www.cprogramming.com/tutorial/lesson11.html)[7](https://blog.devgenius.io/type-casting-in-c-ded8ee760f85?gi=72844562177a).
- **Best Practice:** Avoid in modern C++; prefer C++-style casts for clarity and safety.

## **static_cast**

- **Usage:** `static_cast<new_type>(expression)`
- **Trick:** Best for conversions between compatible types (e.g., numeric types, pointers within inheritance chains). Compile-time type checking helps prevent many errors.
- **Limitation:** Cannot cast away `const` or `volatile`; cannot cast unrelated pointer types.

## **dynamic_cast**

- **Usage:** `dynamic_cast<Derived*>(basePtr)`
- **Trick:** Only works with pointers/references to polymorphic types (classes with at least one virtual function). Returns `nullptr` if the cast fails, making it safer for downcasting in class hierarchies.
- **Limitation:** Slightly slower due to runtime checks; only for class hierarchies.

## **const_cast**

- **Usage:** `const_cast<type*>(expression)`
- **Trick:** Used to add or remove `const` or `volatile` qualifiers. Allows modifying a value that was originally declared as `const`, but doing so is undefined behavior unless the object was not originally declared `const`.
- **Example:**
    
    `const int x = 10;
    int* y = const_cast<int*>(&x);
    *y = 20; *// Dangerous if x was truly const!*`
    

## **reinterpret_cast**

- **Usage:** `reinterpret_cast<new_type>(expression)`
- **Trick:** Allows any pointer or integral type to be cast to any other pointer or integral type. Use with extreme caution, as it can easily lead to undefined behavior[7](https://blog.devgenius.io/type-casting-in-c-ded8ee760f85?gi=72844562177a).
- **Example:** Casting a pointer to an integer or vice versa.

## Summary Table

| Cast Type | Safety | Use Case | Trick/Note |
| --- | --- | --- | --- |
| C-style | Unsafe | Quick, legacy code | Avoid in modern C++ |
| static_cast | Safer | Numeric types, up/downcasting | Compile-time checks |
| dynamic_cast | Safest | Polymorphic class pointers/references | Runtime check; returns nullptr if fails |
| const_cast | Cautious | Remove/add const/volatile | Undefined behavior if used to modify const data |
| reinterpret_cast | Dangerous | Low-level, bitwise reinterpretation | Use only when necessary; no safety checks |

## Key Takeaways

- Prefer C++-style casts (`static_cast`, `dynamic_cast`, etc.) over C-style casts for better safety and clarity.
- Use `static_cast` for most conversions between compatible types.
- Use `dynamic_cast` for safe downcasting in class hierarchies with virtual functions.
- Use `const_cast` only to remove/add constness, and never modify truly constant data.
- Use `reinterpret_cast` only for low-level operations where you are certain of the underlying memory layout.

Understanding and choosing the right type cast ensures type safety and prevents subtle bugs in C++ programs.

In C++, a **container** is a class template in the Standard Template Library (STL) that **stores and organizes collections of data**. Containers are designed to provide various ways to manage and access elements efficiently.

### Common C++ STL Containers:

| Type | Example Containers | Description |
| --- | --- | --- |
| **Sequence** | `vector`, `list`, `deque` | Store elements in a linear sequence. |
| **Associative** | `set`, `map`, `multiset`, `multimap` | Store elements in a sorted structure using keys. |
| **Unordered Associative** | `unordered_set`, `unordered_map`, etc. | Use hash tables for fast access. |
| **Container Adapters** | `stack`, `queue`, `priority_queue` | Built on top of other containers to restrict access in specific ways. |

---

### Example: Using a `std::vector`

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};

    nums.push_back(5); // Add an element

    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}

```

**Output:**

```
1 2 3 4 5

```

---

### Key Features of Containers:

- **Generic:** Work with any data type using templates.
- **Efficient:** Optimized for performance.
- **Flexible:** Can be combined with iterators and algorithms.

Would you like an example comparing different containers like `vector` vs `list`?

---

### 🔁 What is an Iterator?

An **iterator** is an object (like a pointer) used to **access and traverse elements** of a container (like `std::vector`, `std::list`, etc.).

Think of it like a smart pointer that knows how to move through a container.

---

### 🔧 Basic Operations You Can Do with Iterators

| Operation | Description | Example |
| --- | --- | --- |
| `*it` | Dereference: access the value it points to | `std::cout << *it;` |
| `it++` | Move to the next element (post-increment) |  |
| `++it` | Move to the next element (pre-increment) |  |
| `it--` | Move to the previous element | (for bidirectional iterators) |
| `it == end()` | Check if you've reached the end |  |

---

### 🧪 Example: Iterating Over a Vector

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    std::vector<int>::iterator it = vec.begin(); // points to 10

    while (it != vec.end()) {
        std::cout << *it << " ";  // access value
        ++it;                     // move to next element
    }
    return 0;
}

```

**Output:** `10 20 30 40`

---

### 📦 Types of Iterators

| Type | Description | Containers that use it |
| --- | --- | --- |
| **Input Iterator** | Can only read and go forward | `istream_iterator` |
| **Output Iterator** | Can only write and go forward | `ostream_iterator` |
| **Forward Iterator** | Read/write, one direction | `forward_list` |
| **Bidirectional** | Forward and backward | `list`, `map`, `set` |
| **Random Access** | Jump to any position instantly (like array indexing) | `vector`, `deque`, `array` |

---

### 🔄 Range-Based Loop (C++11 and later)

Behind the scenes, it uses iterators:

```cpp
for (int x : vec) {
    std::cout << x << " ";
}

```

---

### 🛠️ Use Case in Custom Class (like MutantStack)

To make a custom class iterable, you typically expose `begin()` and `end()` by inheriting from a container and exposing its `container::begin()`.

Example:

```cpp
class MutantStack : public std::stack<int> {
public:
    using std::stack<int>::c;  // expose the underlying container

    auto begin() { return c.begin(); }
    auto end()   { return c.end(); }
};

```

---

Would you like an example comparing different types of iterators visually (with code and output)?

Great! Let's walk through how **different types of iterators** work in **C++98**, with examples for each — without using modern features like `auto` or range-based loops.

---

### ✅ 1. **Input Iterator** – Read-only, forward-only

Example: `std::istream_iterator`

```cpp
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::cout << "Enter 3 integers: ";
    std::istream_iterator<int> in(std::cin);
    std::istream_iterator<int> end;

    std::vector<int> v;
    for (int i = 0; i < 3; ++i, ++in)
        v.push_back(*in);

    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    return 0;
}

```

---

### ✅ 2. **Output Iterator** – Write-only, forward-only

Example: `std::ostream_iterator`

```cpp
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);

    std::ostream_iterator<int> out(std::cout, " ");
    std::copy(v.begin(), v.end(), out);
    return 0;
}

```

---

### ✅ 3. **Forward Iterator** – Read/Write, single-pass

Example: `std::forward_list` is not in C++98, but all standard containers like `std::set` act like forward or bidirectional.

```cpp
#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    std::set<int>::iterator it = s.begin();
    while (it != s.end()) {
        std::cout << *it << " ";
        ++it;
    }
    return 0;
}

```

---

### ✅ 4. **Bidirectional Iterator** – Read/Write, forward and backward

Example: `std::list`

```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    std::list<int>::iterator it = l.end();
    --it;
    while (true) {
        std::cout << *it << " ";
        if (it == l.begin()) break;
        --it;
    }
    return 0;
}

```

---

### ✅ 5. **Random Access Iterator** – Full pointer-like power

Example: `std::vector`, `std::deque`

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);

    std::vector<int>::iterator it = v.begin();
    std::cout << "Second element is: " << *(it + 1) << std::endl;

    return 0;
}

```

---

### 🧠 Summary Table

| Iterator Type | Supports `++` | Supports `--` | Supports `+n`, `-n` | Read | Write |
| --- | --- | --- | --- | --- | --- |
| Input Iterator | ✅ | ❌ | ❌ | ✅ | ❌ |
| Output Iterator | ✅ | ❌ | ❌ | ❌ | ✅ |
| Forward Iterator | ✅ | ❌ | ❌ | ✅ | ✅ |
| Bidirectional | ✅ | ✅ | ❌ | ✅ | ✅ |
| Random Access | ✅ | ✅ | ✅ | ✅ | ✅ |

---

Let me know if you'd like to see how to implement a custom class with iterators in C++98!

Absolutely! Let's dive into **STL containers** in C++. These are core building blocks of C++ programming, and understanding them well will make you a more powerful and efficient developer.

---

## 🚀 What are STL Containers?

**STL (Standard Template Library)** containers are **template classes** designed to **store collections of data** in various ways. C++ provides several types, each suited for different purposes and performance characteristics.

---

## 🧱 Main Types of Containers

### 1. **Sequence Containers**

Maintain the order of insertion.

| Container | Description | Fastest At | Underlying Structure |
| --- | --- | --- | --- |
| `std::vector` | Dynamic array | Random access | Contiguous array |
| `std::deque` | Double-ended queue | Front/back ops | Array of blocks |
| `std::list` | Doubly-linked list | Insert/delete mid | Doubly-linked list |
| `std::forward_list` | Singly-linked list (C++11+) | Forward traversal | Singly-linked list |

---

### 2. **Associative Containers**

Automatically sort elements by key.

| Container | Description | Structure | Ordered? |
| --- | --- | --- | --- |
| `std::set` | Unique keys | Red-black tree | ✅ Yes |
| `std::map` | Key-value pairs, unique keys | Red-black tree | ✅ Yes |
| `std::multiset` | Allows duplicate keys | Red-black tree | ✅ Yes |
| `std::multimap` | Key-value pairs, duplicate keys | Red-black tree | ✅ Yes |

---

### 3. **Unordered Associative Containers** (C++11+)

Use **hash tables** internally.

| Container | Description | Ordered? | Fastest At |
| --- | --- | --- | --- |
| `std::unordered_set` | Unique keys (like `set`) | ❌ No | Insert/lookup by key |
| `std::unordered_map` | Key-value pairs (like `map`) | ❌ No | Insert/lookup by key |

---

### 4. **Container Adapters**

Provide restricted interface on top of other containers.

| Container | Description | Built On |
| --- | --- | --- |
| `std::stack` | LIFO (Last In First Out) | `deque` by default |
| `std::queue` | FIFO (First In First Out) | `deque` by default |
| `std::priority_queue` | Max-heap for top element access | `vector` by default |

---

## 🔁 Iterators

All containers (except for some adapters like `std::stack`) provide **iterators**:

```cpp
std::vector<int> v;
v.push_back(1);
v.push_back(2);

for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << *it << std::endl;

```

STL iterators act like **smart pointers**:

- `it` accesses the element
- `++it` goes to the next element
- Valid for use in loops and STL algorithms (`std::sort`, `std::find`, etc.)

---

## 📈 Choosing the Right Container

| Task | Recommended Container |
| --- | --- |
| Need random access | `std::vector` |
| Need fast insert/remove in middle | `std::list` or `std::deque` |
| Need sorted keys | `std::map` / `std::set` |
| Need unique keys, but unordered | `std::unordered_map` |
| Need stack behavior | `std::stack` |
| Need queue behavior | `std::queue` |

---

## ✅ Example Summary

```cpp
std::vector<int> vec;       // Dynamic array
std::list<std::string> lst; // Linked list of strings
std::map<std::string, int> scores; // Sorted key-value store
std::stack<int> stk;        // LIFO stack

```

---

Would you like to explore container **performance comparisons**, **common pitfalls**, or **real use-case examples** next?

Great! Let’s explore **C++98 STL containers** with a focus on their capabilities, performance characteristics, and usage **specifically in C++98**, which is more limited than later standards like C++11+ (no `auto`, `range-based for`, `unordered_map`, etc.).

---

## 🧱 1. Sequence Containers in C++98

These maintain element order and allow indexed or sequential access.

### ✅ `std::vector<T>`

- **Dynamic array** with random access.
- Fast at accessing and inserting at the **end**, slow at front/mid insertions.

```cpp
std::vector<int> v;
v.push_back(10);
v.push_back(20);
std::vector<int>::iterator it = v.begin();
while (it != v.end())
{
    std::cout << *it << std::endl;
    ++it;
}

```

### ✅ `std::deque<T>`

- Like `vector`, but allows **fast insert/remove at both ends**.
- No performance penalty on front insertion compared to `vector`.

```cpp
std::deque<int> d;
d.push_front(1);
d.push_back(2);

```

### ✅ `std::list<T>`

- Doubly-linked list: fast insertions/removals **anywhere**, but **slow access** by index.

```cpp
std::list<int> l;
l.push_back(100);
l.push_front(50);

```

---

## 📚 2. Associative Containers in C++98

These **store sorted keys**, use **red-black trees**, and provide **logarithmic time complexity**.

### ✅ `std::set<T>`

- Unique, sorted elements.

```cpp
std::set<int> s;
s.insert(3);
s.insert(1);
s.insert(3); // ignored

```

### ✅ `std::map<Key, Value>`

- Unique keys mapped to values, sorted by key.

```cpp
std::map<std::string, int> age;
age["Bob"] = 30;
age["Alice"] = 25;

```

### ✅ `std::multiset<T>` and `std::multimap<K, V>`

- Allow **duplicate keys**.

---

## ⚙️ 3. Container Adapters (Built on other containers)

C++98 container adapters use other containers (usually `deque`) under the hood.

### ✅ `std::stack<T>`

- LIFO (last in, first out).

```cpp
std::stack<int> s;
s.push(10);
s.push(20);
s.pop(); // removes 20

```

### ✅ `std::queue<T>`

- FIFO (first in, first out).

```cpp
std::queue<int> q;
q.push(1);
q.push(2);
q.pop(); // removes 1

```

### ✅ `std::priority_queue<T>`

- Elements sorted so largest comes out first.

```cpp
std::priority_queue<int> pq;
pq.push(5);
pq.push(10);
pq.top(); // 10

```

---

## 🔁 Iterators in C++98

In C++98, **iterators** are used for traversal, manipulation, and algorithm application.

Example with `std::list`:

```cpp
std::list<int>::iterator it;
for (it = myList.begin(); it != myList.end(); ++it)
    std::cout << *it << std::endl;

```

They act like pointers:

- `it` accesses the value.
- `++it` moves to the next element.

---

## 🧪 Algorithms with Iterators

All containers (except adapters like `stack`) work with algorithms like:

```cpp
#include <algorithm> // For std::sort, std::find, etc.

std::vector<int> v;
v.push_back(3);
v.push_back(1);
v.push_back(2);

std::sort(v.begin(), v.end()); // now sorted: 1 2 3

```

---

## 🚫 What’s Missing in C++98?

- ❌ `std::unordered_map`, `std::unordered_set` (hash-based) — C++11 only
- ❌ Range-based for loops
- ❌ `auto`, `nullptr`, lambda expressions
- ❌ `forward_list` (C++11)
- ❌ Move semantics (C++11)

---

## ⚖️ Performance Summary

| Container | Insert End | Insert Mid | Random Access | Sorted? | Unique? |
| --- | --- | --- | --- | --- | --- |
| `vector` | ✅ Fast | ❌ Slow | ✅ Fast | ❌ No | ❌ No |
| `deque` | ✅ Fast | ❌/⚠️ Medium | ✅ Fast (slower than vector) | ❌ No | ❌ No |
| `list` | ✅ Fast | ✅ Fast | ❌ No access by index | ❌ No | ❌ No |
| `set` | ✅ Log(n) | ✅ Log(n) | ❌ No | ✅ Yes | ✅ Yes |
| `map` | ✅ Log(n) | ✅ Log(n) | ❌ No | ✅ Yes | ✅ Yes |
| `stack` | ✅ Fast (top) | ❌ No access | ❌ No | ❌ No | ❌ No |

---

Would you like a diagram or a printable cheat sheet summarizing all containers and their use cases in C++98?

Great! Here's a **complete explanation of STL containers in C++98**, covering **syntax**, **usage**, **performance**, and **implementation details**.

---

## 📦 What Are Containers in C++98?

In C++98, **containers** are part of the Standard Template Library (STL). They store **collections of objects**. Each container is a class template that defines how data is stored, accessed, and manipulated.

C++98 defines two major categories:

- **Sequence containers**: Store elements in a linear arrangement (like arrays or linked lists).
- **Associative containers**: Store elements in sorted order and allow fast retrieval via keys.

---

## 1️⃣ Sequence Containers

### 1. `std::vector`

- **Dynamic array** that resizes itself.
- **Fast** random access (like arrays).
- Slower insertions/deletions in the middle or front.

```cpp
#include <vector>
std::vector<int> v;
v.push_back(10);
v.push_back(20);
std::cout << v[0]; // Fast random access

```

### Internal:

- Backed by a dynamically allocated array.
- If it grows, it **doubles capacity**, copies data to the new buffer.

### Performance:

- `push_back()` amortized O(1)
- `insert()` in the middle: O(n)
- `operator[]`: O(1)

---

### 2. `std::deque` (Double-Ended Queue)

- Allows **fast insertions/removals at both ends**.
- Slower than vector for random access.

```cpp
#include <deque>
std::deque<int> d;
d.push_back(1);
d.push_front(0); // Unlike vector

```

### Internal:

- Implemented as a map of blocks (chunks of memory).
- Not a single contiguous memory like vector.

### Performance:

- `push_back()` / `push_front()`: O(1)
- `operator[]`: O(1), but slower than vector

---

### 3. `std::list`

- **Doubly linked list**.
- Efficient insertions/removals **anywhere**.

```cpp
#include <list>
std::list<int> l;
l.push_back(3);
l.push_front(1);
l.insert(++l.begin(), 2); // Insert in the middle

```

### Internal:

- Doubly-linked nodes.
- No random access.

### Performance:

- `insert()`, `erase()`: O(1)
- No `operator[]`

---

## 2️⃣ Associative Containers

### 1. `std::set`

- Stores **unique** elements in **sorted order**.
- Based on **balanced binary search tree** (usually Red-Black Tree).

```cpp
#include <set>
std::set<int> s;
s.insert(10);
s.insert(5);

```

### Internal:

- Self-balancing binary tree.
- Ordered automatically on insert.

### Performance:

- `insert()`, `find()`: O(log n)

---

### 2. `std::map`

- Stores **key-value** pairs with **unique keys**, sorted by key.

```cpp
#include <map>
std::map<std::string, int> age;
age["Alice"] = 25;

```

### Internal:

- Also a red-black tree.

### Performance:

- `insert()`, `find()`, `operator[]`: O(log n)

---

### 3. `std::multiset` and `std::multimap`

- Like `set`/`map`, but allow **duplicate keys**.

---

## 3️⃣ Iterators

All containers use **iterators** to traverse elements.

- `vector`, `deque`: **Random-access** iterators
- `list`: **Bidirectional** iterators
- `set`, `map`: **Bidirectional** iterators

```cpp
std::vector<int>::iterator it = v.begin();
while (it != v.end()) {
    std::cout << *it << std::endl;
    ++it;
}

```

---

## 4️⃣ Comparison Table

| Container | Random Access | Fast Insert (Middle) | Fast Insert (Ends) | Sorted | Duplicates |
| --- | --- | --- | --- | --- | --- |
| `vector` | ✅ (O(1)) | ❌ (O(n)) | ✅ (end only) | ❌ | ✅ |
| `deque` | ✅ (O(1)) | ❌ | ✅ (both ends) | ❌ | ✅ |
| `list` | ❌ | ✅ (O(1)) | ✅ | ❌ | ✅ |
| `set` | ❌ | ❌ | ❌ | ✅ | ❌ |
| `map` | ❌ | ❌ | ❌ | ✅ | ❌ (key) |
| `multiset` | ❌ | ❌ | ❌ | ✅ | ✅ |
| `multimap` | ❌ | ❌ | ❌ | ✅ | ✅ (key) |

---

## 5️⃣ STL Algorithms

Containers can be used with **STL algorithms** from `<algorithm>`:

```cpp
std::vector<int> v = {1, 2, 3};
std::find(v.begin(), v.end(), 2); // returns iterator
std::sort(v.begin(), v.end());
std::for_each(v.begin(), v.end(), print);

```

---

## 6️⃣ Custom Comparators (Advanced)

You can customize sorting with `set` or `map`:

```cpp
struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

std::set<int, Descending> mySet;

```

---

## Summary

- Use `vector` for fast random access and mostly end insertions.
- Use `deque` if you need fast insertions/removals at both ends.
- Use `list` if you insert/remove frequently in the middle.
- Use `set/map` for sorted collections and fast lookups.
- Always prefer **STL algorithms** over manual loops when possible.

Would you like this in a downloadable format like a `.pdf` or `.md` file too?

In **C++98**, `std::stack` is part of the Standard Template Library (STL). It represents a **container adaptor**, meaning it provides a specific interface (LIFO: Last-In, First-Out) using another container internally.

---

### 🧱 Key Characteristics of `std::stack`

- **LIFO** (Last-In, First-Out) data structure.
- Elements are inserted and removed **only from the top**.
- It is **not a container itself**, but a **wrapper** around other containers (by default, a `deque`).

---

### 🛠️ Header

```cpp
#include <stack>

```

---

### 🧩 Template Declaration

```cpp
template <class T, class Container = std::deque<T> >
class stack;

```

- `T`: type of elements.
- `Container`: underlying container type (must support `back()`, `push_back()`, `pop_back()`, etc.).

By default, it uses `std::deque<T>`.

---

### ✅ Common Member Functions

| Function | Description |
| --- | --- |
| `push(const T&)` | Adds an element to the top. |
| `pop()` | Removes the top element. |
| `top()` | Accesses the top element. |
| `empty()` | Returns true if stack is empty. |
| `size()` | Returns number of elements. |

---

### 🧪 Example

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top: " << s.top() << std::endl; // 30

    s.pop();

    std::cout << "Top after pop: " << s.top() << std::endl; // 20

    while (!s.empty()) {
        std::cout << "Popping: " << s.top() << std::endl;
        s.pop();
    }

    return 0;
}

```

---

### ⚙️ Internals (How it Works)

`std::stack` delegates work to the internal container:

- `push(x)` calls `c.push_back(x)`
- `pop()` calls `c.pop_back()`
- `top()` returns `c.back()`

The `c` is the protected member of the stack (not accessible directly unless inherited).

---

### 🔄 Custom Container

You can use `std::vector` or `std::list` instead of `std::deque`:

```cpp
std::stack<int, std::vector<int> > myStack;

```

---

### ⚠️ Limitations

- No iterators.
- No ability to loop through contents (unless you inherit from it and expose `c` like in your `MutantStack` example).
- Meant only for **strict LIFO access**.

---

Would you like a visual diagram of how `std::stack` operates behind the scenes?

| Function / Class | Purpose |
| --- | --- |
| `std::ifstream` | Reads from a file |
| `file(dataFile.c_str())` | Opens a file from a string filename |
| `if (!file)` | Checks if the file is opened successfully |
| `std::runtime_error` | Throws an error if the file can't be opened |
| `getline(file, line)` | Reads one line at a time from the file |
| `std::istringstream` | Parses a string like a stream |
| `getline(ss, var, ',')` | Extracts a token from a string stream using `,` as delimiter |
| `std::atof` | Converts C-style string to a `float` |
| `_exchangeRates[date] = price` | Stores the date-price pair in a map |

