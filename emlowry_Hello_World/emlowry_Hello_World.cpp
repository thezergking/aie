// emlowry_Hello_World.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int arc, char* argv[])
{/*
	cout << "Hello World! << endl";

	int firstInteger = 6;
	int secondInteger = 7;
	int result = firstInteger * secondInteger;

	cout << "The answer to the question of Life, the Universe, and Everything is " << result << "." << endl;

	float jiggawatts = 1.21f;
	int exponent;
	double mantissa = frexp(jiggawatts, &exponent);

	cout << jiggawatts << " jiggawatts is " << mantissa << " times 2 to the power of " << exponent << " jiggawatts!" << endl;

	char testChar = 'C';
	short testShort = 33;
	int testInt = 343;
	long testLong = 1234567890;
	long long testLongLong = 9876543210;
	float testFloat = 3.14f;
	double testDouble = 3.141f;
	long double testLongDouble = 3.1415f;
	
	cout << "A char is " << (sizeof(testChar) * 8) << " bits long." << endl;
	cout << "A short is " << (sizeof(testShort) * 8) << " bits long." << endl;
	cout << "An int is " << (sizeof(testInt) * 8) << " bits long." << endl;
	cout << "A long is " << (sizeof(testLong) * 8) << " bits long." << endl;
	cout << "A long long is " << (sizeof(testLongLong) * 8) << " bits long." << endl;
	cout << "A float is " << (sizeof(testFloat) * 8) << " bits long." << endl;
	cout << "A double is " << (sizeof(testDouble) * 8) << " bits long." << endl;
	cout << "A long double is " << (sizeof(testLongDouble) * 8) << " bits long." << endl;

	float start = 1.0f;
	float firstMultiplier = 0.9876543210987654321f;
	float firstDivisor = 1.2345678901234567890f;
	float secondMultiplier = 0.864208642f;
	float secondDivisor = 1.357913579f;

	float current = start;
	cout << "Start with " << current << endl;
	current *= firstMultiplier;
	cout << "Multiplied by " << firstMultiplier << ", you get " << current << endl;
	current /= firstDivisor;
	cout << "Divided by " << firstDivisor << ", you get " << current << endl;
	current *= secondMultiplier;
	cout << "Multiplied by " << secondMultiplier << ", you get " << current << endl;
	current /= secondDivisor;
	cout << "Divided by " << secondDivisor << ", you get " << current << endl;
	current *= secondDivisor;
	cout << "Multiplied by " << secondDivisor << ", you get " << current << endl;
	current /= secondMultiplier;
	cout << "Divided by " << secondMultiplier << ", you get " << current << endl;
	current *= firstDivisor;
	cout << "Multiplied by " << firstDivisor << ", you get " << current << endl;
	current /= firstMultiplier;
	cout << "Divided by " << firstMultiplier << ", you get " << current << endl;
	cout << "Does the ending value of " << current << " match the initial value of " << start << "?" << endl;
	cout << "Let's get rid of the first digits and see:" << endl;
	cout << scientific << "Initial value - 1 = " << (start -1) << endl;
	cout << "Ending value - 1 = " << (current - 1) << endl;
	
	char ival = 'a';
	int aCnt = 0;
	int eCnt = 0;
	int iouCnt = 0;

	switch(ival) {
	case 'a': aCnt++; break;
	case 'e': eCnt++; break;
	default: iouCnt++; break;
	}
	cout << "aCnt == " << aCnt << endl;
	cout << "eCnt == " << eCnt << endl;
	cout << "iouCnt == " << iouCnt << endl;
/**/
	int value = 0;
	string input = "";

	while (true) {	// continue this loop until the code within breaks it.

		// Get an integer value from the user
		cout << "Please enter an integer value to use (or anything else to quit): ";
		getline(cin, input);
		int inputInteger = 0;
		unsigned int intLength = 0;
		try {
			inputInteger = stoi(input, &intLength);
			if (intLength < input.length())	// if the input wasn't *just* an integer...
				break;	// ...exit the loop
		} catch(exception e) {	// if the input stream can't be converted to an integer at all...
			break;	// ...exit the loop
		}

		// Get an operation from the user
		cout << "Please indicate which operation on the running total to use this value for\n    (options are +, -, *, or /): ";
		getline(cin, input);
		char operation = '0';	// if the input is too long to be one of the operators, use an invalid operator
		if (input.length() == 1)	// if the input is just one character...
			operation = input[0];	// ...use it as the operator

		// perform the indicated operation, if valid
		switch(operation) {
		case '+': value += inputInteger; break;
		case '-': value -= inputInteger; break;
		case '*': value *= inputInteger; break;
		case '/':
			if (inputInteger == 0)
				cout << "        NO YOU FOOL!  YOU'LL DOOM US ALL!!!\n";
			else
				value /= inputInteger;
			break;
		default:
			cout << "        '" << input << "' is not an available operation." << endl;
		}

	}	// Once the loop ends...
	cout << "\nFINAL TOTAL: " << value << endl;	// ...print the final value

	cout << "\nPress enter to quit...";
	getchar();
	return 0;
}

