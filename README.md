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


Feature | Pure Virtual Function (= 0) | Virtual Function (without = 0)
Implementation | No implementation in the base class. | Can have an implementation in the base class.
Purpose | Enforces that derived classes must provide an implementation. | Allows derived classes to override or use the base class implementation.
Instantiation of Base Class | The class becomes abstract and cannot be instantiated. | The class is not abstract and can be instantiated if there are no other pure virtual functions.
Usage | Used to define abstract interfaces or to force derived classes to implement the function. | Used when a default implementation is needed, but customization is allowed.
