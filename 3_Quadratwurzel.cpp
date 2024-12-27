// Task: Heron's method 
// Heron of Alexandria developed a method to calculate the square root of a number. 
// The iteration rule for determining the square root is 
// x_n+1 = (x_n + a/x_n) / 2, where a is the number whose square root is being searched for and x0 is any initial value not equal to 0.

// a) Write a function heron_ite(...), which executes the Heron method iteratively. 
// The number of iterations is 10. 

// b) Write a main function that reads in a number from the user and outputs its square root 
//  (i.e. calls the function heron_ite(...) and writes the result to the console). 

#include <iostream>
#include <cmath>
using namespace std; 

void numberCheck(double dNumber)
{
	while(cin.fail())
		{
			cout << "Invalid input. Please enter a valid number." << endl;
			cin.clear();
			cin.ignore(1000,'\n');
			cin >> dNumber;
		}
}

double heron_ite(double a, unsigned int iIterations = 10) 
{
    // initial value x_n
    double x_n = 2.0;
    for(int i=0; i<iIterations; i++) {
        x_n = (x_n + a/x_n) / 2;
    }
    
    return x_n;
}

int main() {
    double a;
    cout << "This programme is used to calculate the square root of a number."<< std::endl;
    cout << "Enter a number: "<< endl;
    cin >> a;
    numberCheck(a);
    cout << "the root of " << a << " is approximately " << heron_ite(a) << endl;
    return 0;
}
