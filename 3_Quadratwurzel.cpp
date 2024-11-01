#include <iostream>

// Function to calculate square root using the Heron method
double dheron_ite(double da, int iiterations = 10) {
    double dx = da; // Initial guess x0
    for (int i = 0; i < iiterations; ++i) {
        dx = (dx + da / dx) / 2.0;
    }
    return dx;
}

int main() {
    double dnumber;

    // Prompt the user to enter a number
    std::cout << "Enter a number to find its square root: ";
    std::cin >> dnumber;

    // Check for valid input (positive number)
    if (dnumber < 0) {
        std::cout << "Square root of a negative number is not real.\n";
        return 1;
    }

    // Calculate square root using the Heron method
    double dsqrtResult = dheron_ite(dnumber);

    // Output the result
    std::cout << "The square root of " << dnumber << " is approximately " << dsqrtResult << std::endl;

    return 0;
}
