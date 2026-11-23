# CalcX — C++ Scientific Calculator

CalcX is a command-line scientific calculator built using C++. It supports basic arithmetic as well as mathematical and scientific operations through a simple menu-driven interface.

## Features

### Basic Operations
- Addition
- Subtraction
- Multiplication
- Division
- Modulus

### Scientific Operations
- Power
- Square root
- Percentage
- Sine
- Cosine
- Tangent
- Base-10 logarithm
- Natural logarithm
- Factorial

### Input Validation

The calculator handles common invalid operations such as:

- Division by zero
- Modulus by zero
- Square root of negative numbers
- Logarithm of non-positive numbers
- Negative factorial
- Factorial values greater than 20
- Invalid menu choices

## Technologies

- C++
- Standard Library
- `<cmath>`
- `<iomanip>`
- `<iostream>`

## How to Run

### Compile

```bash
g++ main.cpp -o CalcX
```

### Run

```bash
./CalcX
```

### Windows

```bash
CalcX.exe
```

## Example

```text
====================================
          SCIENTIFIC CALCULATOR
====================================
1.  Addition
2.  Subtraction
3.  Multiplication
4.  Division
5.  Modulus
6.  Power
7.  Square Root
8.  Percentage
9.  Sine
10. Cosine
11. Tangent
12. Logarithm (base 10)
13. Natural Logarithm
14. Factorial
0.  Exit
====================================

Enter your choice: 6
Enter base: 2
Enter exponent: 10

Result = 1024.0000
```

## Future Improvements

- Calculation history
- Memory functions (M+, M-, MR, MC)
- Expression parsing
- Bracket support
- Custom error handling
- Graphical user interface
- Unit conversions

## Author

G.Sesha Srikar Sai
