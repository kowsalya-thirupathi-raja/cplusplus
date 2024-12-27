// Task: Palindromes 

// A palindrome is a word that reads the same from the right as from the left
// e.g. the word ‘rotor’. 

// a) Create a function that tests whether a given word is a palindrome. 
// Only words in lower case have to be considered. The operator [] can be used to compare individual characters. 
// (Note that the return value of [] is of type char). 

// b) Write a programme that reads in a word and returns whether it is a palindrome. 

#include <iostream>
#include <string> 

void dataTypCheck(std::string str)
{
	while(std::cin.fail())
		{
			std::cout << "Invalid input. Please enter string." << std::endl;
			std::cin.clear();
			std::cin.ignore(1000,'\n');
			std::cin >> str;
		}
}

bool isPalindrome(std::string str) 
{ 
  int n = str.size(); 
  for(int i = 0; i < n/2; i++) 
  { 
    if(str[i] != str[n-i-1]) 
    { 
      return false; 
    } 
  } 
  return true; 
}

int main() 
{ 
    //  get the word from the user
    std::string word;
    std::cout << "This programme is used to determine the palindromes."<< std::endl;
    std::cout << "Enter a word: ";
    std::cin >> word;
    dataTypCheck(word);
    if (isPalindrome(word)) 
    {
        std::cout <<  word << " is a palindrome" << std::endl;
    } 
    else 
    {
        std::cout <<  word << " is not a palindrome" << std::endl;
    }
    
    return 0;
} 

