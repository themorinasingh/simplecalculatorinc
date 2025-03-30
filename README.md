# Simple Calculator in C

## Overview
This is a simple command-line calculator written in C. It allows users to perform basic arithmetic operations, including addition, subtraction, multiplication, division, modulus, and exponentiation. The program uses function pointers to dynamically call the required mathematical operation.

## Features
- Supports basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
  - Modulus (%)
  - Power (^)
- User-friendly CLI interface
- Uses function pointers for efficient execution
- Loop-based menu for continuous use until exit

## How to Run
### Prerequisites
- A C compiler (GCC, Turbo C, or any other)
- A terminal or command prompt

### Compilation & Execution
1. Clone this repository:
   ```sh
   git clone https://github.com/yourusername/calculator-in-c.git
   cd calculator-in-c
   ```
2. Compile the program:
   ```sh
   gcc calculator.c -o calculator -lm
   ```
3. Run the program:
   ```sh
   ./calculator
   ```

## Usage
1. Choose an operation from the menu by entering the corresponding number.
2. Enter two numbers when prompted.
3. View the calculated result.
4. Repeat until you choose to exit.

## Example Output
```
____________________________
Welcome to Simple Calculator

Choose one of the following operators:
1. Add
2. Subtract
3. Multiply
4. Divide
5. Modulus
6. Power
7. Exit
Now enter your choice: 2
Now enter 2 numbers: 10 5
The outcome is 5.00
```

## Future Enhancements
- Implement error handling (e.g., division by zero)
- Add more advanced mathematical functions
- Improve UI/UX with a graphical interface

## Author
**Morina Singh**

## License
This project is open-source and available under the [MIT License](LICENSE).

