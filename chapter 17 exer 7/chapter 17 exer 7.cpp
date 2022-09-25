// chapter 17 exer 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that lets the user enter an integer, and then
displays a message indicating whether the given number is a multiple of
4; it must display “NN is not a multiple of 4” otherwise (where NN is
the given number). Moreover, the C++ program must display the
structure of the given integer, including the given integer, the quotient,
and any remainder. For example, if the given integer is 14, the message
“14 = 3 x 4 + 2” must be displayed. Assume that the user enters a nonnegative value*/

#include <iostream>
using namespace std;

int main()
{
	int NN,dividend,divisor,quotient,remainder;

	cout << "enter NN:";
	cin >> NN;

	if (NN % 4 != 0) {
		cout << "NN is not a multiple of 4 ";
		dividend = NN;
		divisor = 4;
		quotient = dividend / divisor;
		remainder = dividend % divisor;

		cout <<"NN = divisor * quotient + remainder"<< NN << " = " << divisor << " * " << quotient <<" + " << remainder;
		
	}
	else {
		cout << "NN is the given number ";
	}

	return 0;
}

