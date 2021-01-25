// This program uses a function to reduces fractions
// Written by: Ayden Holgate
// Date: Jan. 25, 2021

// chapter5Exercise10ReduceFract.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Reduce(int& num, int& denom);

int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	int num, denom;

	cout << "Enter the numerator: ";
	cin >> num;

	cout << "Enter the denominator: ";
	cin >> denom;

	Reduce(num, denom);

	cout << "The reduced fraction is " << num << "/" << denom << endl;


	return 0;
}// End of program

void Reduce(int& num, int& denom){
	int low;
	
	if (num > denom){
		low = denom;
	}
	else {
		low = num;
	}

	for (int i = 2; i <= low; i++){
		if((num % i == 0) && (denom % i == 0)){
			num = num / i;
			denom = denom / i;
			i = 1;
		}

	}

}
