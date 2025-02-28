#include "Complex.h"
#include <iostream>


Complex::Complex()
{
	real = 0;
	imag = 0;
	count++;
}
void Complex::Accept()
{
	std::cout << "Enter real part: ";
	std::cin >> real;
	std::cout << "Enter imaginary part: ";
	std::cin >> imag;
}	
void Complex::Display()
{
	std::cout << "Real part: " << real << std::endl;
	std::cout << "Imaginary part: " << imag << std::endl;
}
void Complex::showCount()
{
	std::cout << "Number of objects created: " << count << std::endl;
}
