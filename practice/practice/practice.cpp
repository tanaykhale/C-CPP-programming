// practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Complex.h"
using namespace std;


int main()
{
	Complex n1,n2(4,5),n3;
	/*n1.Acccept();*/
	n1.Display();
	n2.Display();
	n3.setComplex(6, -9);
	n3.getComplex();
	n3.Display();
	cout << "Real number for n3 is:" << n3.getComplex()<<endl;
	 n3.constExample();
	 Complex::showCount();

	/*Complex c1, c2, c3, c4;
	c3 = c1 + c2;
	c3.Display();*/
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
