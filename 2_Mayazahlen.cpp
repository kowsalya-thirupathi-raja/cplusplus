// Task: Maya numbers 

// The Mayan number system was used to indicate very large numbers for calendrical data and calculations.
// The counting method was not based on the decimal system (ten system) that we are familiar with, 
// but on the vigesimal system (twenty system). 

// Write a programme that reads any number from the decimal system, 
// then converts it into the Maya number system and outputs it. 
// (Hint: You can can use the modulo operator:%)

// Example: 
// Number in tens system:  
// 440 (4*10² + 4*101 + 0*100) 

// Number in twenty system: 120 (1*20² + 2*201 + 0*200) 

// Possible output:   
// 0 
// 2 
// 1 read from bottom to top 120.

#include <iostream>
#include <cmath>

using namespace std;

void numberCheck(unsigned int uiNumber)
{
	while(cin.fail())
    {
        cout << "Invalid input. Please enter a valid number." << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cin >> uiNumber;
    }

    if (uiNumber < 0)
    {
        cout << "Negative numbers are not supported in the Mayan system." << endl;   
        exit(1); 
    }

}

int main() {
	cout << "This programme is used to convert numbers from the decimal system to the vigesimal system, which is only valid for positive integers." << endl;
	cout << "Enter the positive integer:" ;

	unsigned int uiNumber=0;
	// unsigned int uiResult=0;

	// get the number
	cin >> uiNumber;
	numberCheck(uiNumber);

	//Option 2:	transfer the number
    std::cout << "Mayan numeral system representation (bottom to top):\n";
    if (uiNumber == 0)
    {
        cout << "0" << endl;
        return 0;
    }

	while(uiNumber%20 != 0 || uiNumber/20 != 0 )
	{
		unsigned int uiZiffer = uiNumber%20;
		cout << uiZiffer << endl;
		uiNumber = uiNumber/20;
	}
    
	return 0;

	// //Option 1:	transfer the number
	// while(uiNumber%20 != 0 || uiNumber/20 != 0 )
	// {
	// 	uiZiffer = uiNumber%20;
	// 	if (uiZiffer < 10)
	// 		uiResult = uiZiffer*pow(10,i) + uiResult;
	// 	else
	// 		uiResult = uiZiffer * pow(100, i) + uiResult;
	// 	i = i+1;
	// 	uiNumber = uiNumber/20;
	// }


	// cout << "Das Ergebnis ist " << uiResult << endl;
	// return 0;
}
