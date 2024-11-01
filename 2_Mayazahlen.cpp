#include <iostream>

int main() {
    int idecimalNumber;

    // Prompt the user for input
    std::cout << "Enter a decimal number: ";
    std::cin >> idecimalNumber;

    // Handle invalid negative input
    if (idecimalNumber < 0) {
        std::cout << "Negative numbers are not supported in the Mayan system.\n";
        return 1;
    }

    // Special case for 0
    if (idecimalNumber == 0) {
        std::cout << "Mayan numeral system representation:\n0\n";
        return 0;
    }

    // Convert to Mayan base-20 system and store results
    std::cout << "Mayan numeral system representation (bottom to top):\n";
    while (idecimalNumber > 0) {
        int iremainder = idecimalNumber % 20;  // Get the base-20 digit
        std::cout << iremainder << std::endl; // Print the digit
        idecimalNumber /= 20;                 // Move to the next higher place value
    }

    return 0;
}
