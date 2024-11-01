#include <iostream>

// Function to swap the values of two integers using references
void vSwap(int& ia, int& ib) {
    int itemp = ia; // Store the value of a in temp
    ia = ib;        // Assign the value of b to a
    ib = itemp;     // Assign the stored value of a (from temp) to b
}

int main() {
    int ix = 5;
    int iy = 10;

    // Print the values before swapping
    std::cout << "Before swapping: x = " << ix << ", y = " << iy << std::endl;

    // Call the swap function
    vSwap(ix, iy);

    // Print the values after swapping
    std::cout << "After swapping: x = " << ix << ", y = " << iy << std::endl;

    return 0;
}
