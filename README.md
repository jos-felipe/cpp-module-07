# CPP Module 07 - C++ Templates

This module focuses on C++ Templates, a powerful feature that allows writing generic code that works with different data types while maintaining type safety.

## Overview

The project consists of three exercises that explore different aspects of C++ templates:

1. **Exercise 00: Start with a few functions**
   - Implementation of basic function templates: swap, min, and max
   - Understanding template syntax and usage
   - Working with different data types using the same function template

2. **Exercise 01: Iter**
   - Implementation of a function template that applies a function to each element of an array
   - Learning about template function parameters
   - Understanding how to work with arrays and function pointers in templates

3. **Exercise 02: Array**
   - Implementation of a template class for a dynamic array
   - Understanding template class design
   - Managing memory allocation and exception handling
   - Implementing copy constructor and assignment operator for template classes

## Technical Requirements

- Compiler: c++ (C++98 standard)
- Compilation flags: -Wall -Wextra -Werror
- Make: Compilation automation
- Each exercise includes its own Makefile

## Installation & Usage

1. Clone the repository:
```bash
git clone https://github.com/jos-felipe/cpp-module-07.git
cd cpp07
```

2. Choose an exercise directory and compile:
```bash
cd ex00
make
```

3. Run the program:
```bash
./program_name
```

## Exercise Details

### Exercise 00: Function Templates
- Files: `whatever.hpp`, `main.cpp`
- Implements three function templates:
  - `swap<T>`: Swaps two values of the same type
  - `min<T>`: Returns the smaller of two values
  - `max<T>`: Returns the larger of two values

### Exercise 01: Iter Template Function
- Files: `iter.hpp`, `main.cpp`
- Implements a template function that:
  - Takes an array address, length, and function pointer
  - Applies the function to each array element
  - Works with any data type

### Exercise 02: Array Template Class
- Files: `Array.hpp`, `main.cpp`
- Implements a template class with:
  - Default and parametric constructors
  - Copy constructor and assignment operator
  - Subscript operator with bounds checking
  - Size method
  - Exception handling for out-of-bounds access

## Learning Outcomes

- Understanding C++ template syntax and usage
- Working with function and class templates
- Managing memory in template classes
- Implementing exception handling in templates
- Creating generic code that works with multiple data types

## Author

José Felipe ([jos-felipe](https://github.com/jos-felipe))  
Email: josfelip@student.42sp.org.br

## License

This project is part of the 42 School curriculum. For more information about 42 and its projects, visit [42sp.org.br](https://www.42sp.org.br/).