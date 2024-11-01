#include <iostream>
#include <cmath> // For sqrt() function

// Function to calculate the solutions of a quadratic equation
// Arguments: coefficients a, b, c, and two pointers for the solutions x1 and x2
bool bSolveQuadratic(double da, double db, double dc, double* pdx1, double* pdx2) {
    // Calculate the discriminant (Delta)
    double dDiscriminant = db * db - 4 * da * dc;

    // If the discriminant is negative, no real solutions exist
    if (dDiscriminant < 0) {
        return false; // No real solutions
    }

    // If discriminant is zero or positive, calculate the real solutions
    if (dDiscriminant == 0) {
        *pdx1 = *pdx2 = -db / (2 * da); // One real double root
    } else {
        *pdx1 = (-db + sqrt(dDiscriminant)) / (2 * da); // First solution
        *pdx2 = (-db - sqrt(dDiscriminant)) / (2 * da); // Second solution
    }

    return true; // Real solutions exist
}

int main() {
    double da, db, dc; // Coefficients of the quadratic equation
    double dx1, dx2;  // Variables to store the solutions

    // Read the coefficients from the user
    std::cout << "Enter the coefficients da, db, and dc: ";
    std::cin >> da >> db >> dc;

    // Call the function to solve the quadratic equation
    if (bSolveQuadratic(da, db, dc, &dx1, &dx2)) {
        if (dx1 == dx2) {
            std::cout << "The equation has one real solution: x = " << dx1 << std::endl;
        } else {
            std::cout << "The equation has two real solutions: x1 = " << dx1 << ", x2 = " << dx2 << std::endl;
        }
    } else {
        std::cout << "The equation has no real solutions." << std::endl;
    }

    return 0;
}
