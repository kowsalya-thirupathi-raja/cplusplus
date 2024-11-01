#include <iostream>
#include <limits>

// Function to safely read a valid number
double dreadNumber() {
    double dnumber;
    while (true) {
        std::cout << "Enter a number: ";
        std::cin >> dnumber;

        // Check if the input is valid
        if (std::cin.fail()) {
            std::cin.clear(); // Reset error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Invalid input. Please enter a valid number.\n";
        } else {
            return dnumber; // Valid number is returned
        }
    }
}

// Function to safely read a valid operator
char chreadOperator() {
    char chop;
    while (true) {
        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> chop;

        // Check if the operator is valid
        if (chop == '+' || chop == '-' || chop == '*' || chop == '/') {
            return chop; // Valid operator is returned
        } else {
            std::cout << "Invalid operator. Please enter one of +, -, *, or /.\n";
        }
    }
}

int main() {
    std::cout << "Welcome to the calculator!\n";

    // Read the first number
    double dnum1 = dreadNumber();

    // Read the operator
    char chop = chreadOperator();

    // Read the second number
    double dnum2;
    while (true) {
        dnum2 = dreadNumber();

        // Check if division by zero is attempted
        if (chop == '/' && dnum2 == 0) {
            std::cout << "Division by zero is not allowed. Please enter a different number.\n";
        } else {
            break; // Valid number
        }
    }

    // Perform calculation and display the result
    double dresult;
    switch (chop) {
        case '+':
            dresult = dnum1 + dnum2;
            break;
        case '-':
            dresult = dnum1 - dnum2;
            break;
        case '*':
            dresult = dnum1 * dnum2;
            break;
        case '/':
            dresult = dnum1 / dnum2;
            break;
    }

    // Output result
    std::cout << "Result: " << dnum1 << " " << chop << " " << dnum2 << " = " << dresult << std::endl;

    return 0;
}
