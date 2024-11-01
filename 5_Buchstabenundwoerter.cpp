#include <iostream>
#include <string>

// Function to scramble the letters in a word by swapping adjacent pairs
std::string scrambleWord(const std::string& word) {
    std::string scrambled = word; // Copy the original word to modify
    int ilength = scrambled.length();

    // Check for words with more than 2 letters to perform scrambling
    if (ilength > 2) {
        // Loop through the string, starting from index 1, and swap pairs
        for (int i = 1; i < ilength - 1; i += 2) {
            std::swap(scrambled[i], scrambled[i + 1]);
        }
    }
    
    return scrambled;
}

// Function to remove all vowels from a word
std::string removeVowels(const std::string& word) {
    std::string result;
    for (char c : word) {
        // Append only non-vowel characters
        if (std::string("aeiouAEIOU").find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string word;

    // Prompt the user to enter a word
    std::cout << "Enter a word: ";
    std::cin >> word;

    // Apply transformations
    std::cout << "Scrambled word: " << scrambleWord(word) << std::endl;
    std::cout << "Word without vowels: " << removeVowels(word) << std::endl;

    return 0;
}
