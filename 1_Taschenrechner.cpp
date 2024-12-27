// Task: Calculator 

// In the following, a pocket calculator is to be created that can perform the four basic arithmetic operations. 
// The calculator works according to the following principle:
// read in the first number, then the operator for the calculation type and then the second number.

// Pay attention to decimal numbers and unauthorised arithmetic operations. 

// a) Write a programme that reads in a number entered by the user and checks it for validity. 
// If the input is invalid, the user should be given the opportunity to re-enter a value. 

// b) Next, the operator is read in. Use the char data type to 
// read in an operator (+, -, *, /). Take incorrect entries into account. 

// Then read in the second number (continue to watch out for 
// incorrect entries) and then carry out the desired calculation. 

// Pay attention to meaningful mathematical calculations.

#include <iostream>
#include <string>
using namespace std;

double dreadNumber() {
    double dNumber;
    cin >> dNumber;
	while(cin.fail())
	{
		cout << "Invalid input. Please enter a valid number." << endl;
		cin.clear();
		cin.ignore(1000,'\n');
		cin >> dNumber;
	}
    return dNumber;
}

char chreadOperator() {
    char chOperator;
    cin >> chOperator;
    string supportedOperator = "+-*/";
    string::size_type idx = supportedOperator.find(chOperator);
    while (idx == string::npos) {
        cout << "Invalid input. Please enter only an operation +,-,*,/." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> chOperator;
        idx = supportedOperator.find(chOperator);
    }
    return chOperator;
}

int main() {
	cout << "This is a pocket calculator that can perform the four basic arithmetic operations +,-,*,/." << endl;

	//	get the first number
	cout << "the first number: "  << endl;
    double dFirstNumber = dreadNumber();

	//	get the operator
	char chCalcOperator;
	cout << "operation: " << endl;
    chCalcOperator = chreadOperator();
	
	//	get the second number
	double dSecondNumber = 0;
	cout << "the second number: "  << endl;
    dSecondNumber = dreadNumber();

	//	calculate the result
	double dResult = 0;
	switch(chCalcOperator)
	{
	case '+':
		dResult = dFirstNumber + dSecondNumber;
		break;
	case '-':
		dResult = dFirstNumber - dSecondNumber;
		break;
	case '*':
		dResult = dFirstNumber * dSecondNumber;
		break;
	case '/':
		if (dSecondNumber == 0)
		{
			cout << "Division by zero is not allowed!" << endl;
			return 0;
		}
		dResult = dFirstNumber / dSecondNumber;
		break;
	}
	cout << "the result: " << dResult << endl;

	return 0;
}
