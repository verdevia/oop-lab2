#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class complex
{
	double real;
	double imagin;
public:
	void init(double r, double i); // initialising values
	void read(); // keyboard input
	void display(); // value output
	complex add(complex m); // addition of two complex numbers
	complex sub(complex m); // subtraction of two complex numbers
	complex mul(complex m); // multiplication of two complex numbers
	complex div(complex m); // division of two complex numbers
	complex conj(); // conjunction of one complex number
	bool equ(complex m); // check if 2 complex numbers are equal
	string tostr(); // transfer values to string type 
};

