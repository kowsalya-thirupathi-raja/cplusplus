#include <iostream>
#include <string>

int main() {
    std::string sword;

    // Prompt the user to enter a word
    std::cout << "Enter a word to check if it is a palindrome: ";
    std::cin >> sword;

    // Check if the word is a palindrome by comparing the word with its reverse
    if (sword == std::string(sword.rbegin(), sword.rend())) {
        std::cout << sword << " is a palindrome.\n";
    } else {
        std::cout << sword << " is not a palindrome.\n";
    }

    return 0;
}
