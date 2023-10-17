#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
	complex comp1, comp2, res; 
	cout << "Enter first complex number" << endl;
	comp1.read();
	comp1.display();
	cout << endl << "Enter second complex number" << endl;
	comp2.read();
	comp2.display();
	cout << endl;

	res = comp1.add(comp2);
	cout << "Sum:";
	res.display();
	cout << endl;
	
	res = comp1.sub(comp2);
	cout << "Dif:";
	res.display();
	cout << endl;

	res = comp1.mul(comp2);
	cout << "Prod:";
	res.display();
	cout << endl;

	res = comp1.div(comp2);
	cout << "Quot: ";
	res.display();
	cout << endl;

	res = comp1.conj();
	cout << "Conjoined: ";
	res.display();
	cout << endl;

	if (comp1.equ(comp2))
		cout << "Numbers are equal" << endl;
	else
		cout << "Numbers aren't equal" << endl;

	cout << "String representation of 1st number: " << comp1.tostr() << endl;
	cout << "String representation of 2st number: " << comp2.tostr() << endl;
}
